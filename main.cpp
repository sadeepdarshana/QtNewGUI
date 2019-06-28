


#include <QApplication>
#include <QDebug>
#include <QtWidgets/QPushButton>
#include <QtCore/QFile>
#include <QtWidgets/QGraphicsDropShadowEffect>
#include <QtWidgets/QHBoxLayout>
#include <brlcad/ConstDatabase.h>
#include "src/QtNewGUI/gui/MainWindow.cpp"

using namespace std;

const QString THEMES[] = {":qdarkstyle/style.qss"};
const int CURRENT_THEME_INDEX = 0;
const  QColor SHADOW_COLOR = QColor(11,11,11);


//sets the theme of the application
void setStylesheet(QMainWindow *ui){

    QFile stylesheet_file(THEMES[CURRENT_THEME_INDEX]);
    stylesheet_file.open(QIODevice::ReadOnly);
    if(!stylesheet_file.exists())qDebug("no file");
    QString stylesheet = QLatin1String(stylesheet_file.readAll());
    ui->setStyleSheet(stylesheet);

}

void addShadow(QWidget *target) {
    target->window()->setAttribute(Qt::WA_TranslucentBackground);
    //target->window()->layout()->setMargin(50);
    QGraphicsDropShadowEffect* ef = new QGraphicsDropShadowEffect;
    ef->setBlurRadius(10);
    ef->setColor(SHADOW_COLOR);
    ef->setOffset(1);
    target->setGraphicsEffect(ef);
}


int main(int argc, char **argv){

    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication application(argc, argv);

    char*        file = 0;
    if (argc > 1) file = argv[1];

    MainWindow window(file);
    window.show();

    return application.exec();


}
