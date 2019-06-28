//
// Created by sadeep on 6/27/19.
//



#ifndef OBL
#define OBL


#include <brlcad/MemoryDatabase.h>

using namespace BRLCAD;

class ObjectBrowser : public QDockWidget {

public:

    ObjectBrowser(QWidget * parent):QDockWidget("Objects",parent) {
        update(0);
    }

    void update(MemoryDatabase * m_database){



        auto list = new QListWidget(this);
        list-> addItems(QStringList());

        if(m_database!=0){
            BRLCAD::ConstDatabase::TopObjectIterator it = m_database->FirstTopObject();
            while (it.Good()){
                list->addItems(QStringList()<<it.Name());
                ++it;
            }
        }


        setWidget(list);
        list->setStyleSheet("border-radius: 0px;");
        setFixedWidth(200);
        setFeatures(QDockWidget::NoDockWidgetFeatures);
    }

};

#endif