//
// Created by sadeep on 6/26/19.
//
#ifndef ToolboxL
#define ToolboxL


#include <QtWidgets/QFrame>
#include <iostream>
#include "MainWindow.cpp"
#include "ToolboxIcon.cpp"
#include "../geometry/GeometryOperationsManager.cpp"
#include "../utils/Utils.cpp"

class Toolbox : public QDockWidget {
public:



    Toolbox(QWidget* parent, ApplicationContext * context):QDockWidget("Tools",parent){

        QFrame* container = new QFrame(this);
        QVBoxLayout* layout = new QVBoxLayout();
        container->setLayout(layout);
        setWidget(container);
        setFixedWidth(74);
        setFeatures(QDockWidget::NoDockWidgetFeatures);


        ToolboxIcon* tool1 = new ToolboxIcon(this,QIcon::fromTheme(":/tools/icons/arbs.png"),context);
        layout->addWidget(tool1,Qt::AlignTop);

        ToolboxIcon* tool2 = new ToolboxIcon(this,QIcon::fromTheme(":/tools/icons/sphere.png"),context);
        layout->addWidget(tool2,Qt::AlignTop);


        ToolboxIcon* tool3 = new ToolboxIcon(this,QIcon::fromTheme(":/tools/icons/torus.png"),context);
        layout->addWidget(tool3,Qt::AlignTop);

        ToolboxIcon* tool4 = new ToolboxIcon(this,QIcon::fromTheme(":/tools/icons/metaballs.png"),context);
        layout->addWidget(tool4,Qt::AlignTop);

        layout->addStretch();
    }



};


#endif