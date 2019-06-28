//
// Created by sadeep on 6/28/19.
//

#ifndef ApplicationContextL
#define ApplicationContextL

#include "../gui/ObjectBrowser.cpp""
#include "../display/DisplayService.cpp"

class ApplicationContext{
public:

    GraphicsViewOpenGL * gv;
    ObjectBrowser * objectBrowser;
    MemoryDatabase * m_database;
    GeometryOperationsManager * gom;



    void updateUiForDatabaseChanges(){

        gv->vp=DisplayService::getVList(m_database);
        gv->update();
        objectBrowser->update(m_database);
    }
};


#endif