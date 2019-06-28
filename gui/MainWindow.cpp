
#ifndef MainWindowL
#define MainWindowL


#include <QtWidgets/QMainWindow>
#include <QtCore/QFile>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include "Toolbox.cpp"
#include "ObjectBrowser.cpp"
#include "src/QtNewGUI/display/DisplayService.cpp"

#include <brlcad/MemoryDatabase.h>

#include "../display/GraphicsViewOpenGL.cpp"
#include "../geometry/GeometryOperationsManager.cpp"

class MainWindow : public QMainWindow {


private:


    void setTheme() {

        QFile stylesheet_file(":qdarkstyle/style.qss");
        stylesheet_file.open(QIODevice::ReadOnly);
        this->setStyleSheet(QLatin1String(stylesheet_file.readAll()));
    }


    void createMenus(){

        auto menu = menuBar();
        auto fileMenu = menuBar()->addMenu(tr("&File"));
        auto fopen = fileMenu->addAction("&Open");
        auto fsave = fileMenu->addAction("&Save");
        auto fsaveas = fileMenu->addAction("&Save As");

        connect(fopen, &QAction::triggered, this, &MainWindow::openFile);
        connect(fsave, &QAction::triggered, this, &MainWindow::saveFile);
    }


public:


    BRLCAD::MemoryDatabase m_database;
    GraphicsViewOpenGL * gv;
    ObjectBrowser * objectBrowser;
    GeometryOperationsManager * gom = new GeometryOperationsManager(0);
    string filePath = "";

    ApplicationContext * context = new ApplicationContext();

    MainWindow(const char* file){

        this->filePath = filePath;
        if(file!=0)loadDatabase(file);
        createMenus();
        setTheme();
        showMaximized();
        setWindowTitle("The new BRL-CAD GUI");

        objectBrowser = new ObjectBrowser(this);
        addDockWidget(Qt::RightDockWidgetArea, objectBrowser);


        auto toolbox = new Toolbox(this,context);
        addDockWidget(Qt::LeftDockWidgetArea, toolbox);

        gv = new GraphicsViewOpenGL();
        gv->setFocus();
        gv->setFocusPolicy(Qt::ClickFocus);
        setCentralWidget(gv);


        this->statusBar()->showMessage("BRL-CAD");
    }



    void openFile() {
        QString filePath = QFileDialog::getOpenFileName(this, tr("Open BRL-CAD database"), QString(), "BRL-CAD Database (*.g)");
        loadDatabase(filePath.toUtf8().data());
        this->statusBar()->showMessage(filePath);
        string s(filePath.toUtf8().data());
        this->filePath = s;
    }

    void saveFile() {
        m_database.Save(filePath.c_str());
        this->statusBar()->showMessage(QString::fromStdString("Database saved to "+string(filePath)+" successfully"));
    }

    void loadDatabase(const char *filePath){
        m_database.Load(filePath);
        gom->updateDatabase(&m_database);
        context->m_database = &m_database;
        context->gom = gom;
        context->gv = gv;
        context->objectBrowser = objectBrowser;

        context->updateUiForDatabaseChanges();
    }

};


#endif