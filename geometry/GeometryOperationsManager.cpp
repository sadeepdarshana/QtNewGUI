//
// Created by sadeep on 6/28/19.
//
#ifndef GeometryOperationsManagerL
#define GeometryOperationsManagerL

#include <brlcad/MemoryDatabase.h>
#include <brlcad/Ellipsoid.h>
#include <src/QtNewGUI/display/GraphicsViewOpenGL.h>

using namespace BRLCAD;

class GeometryOperationsManager{

private:
    MemoryDatabase * m_database;


public:
    GeometryOperationsManager(MemoryDatabase * m_database) {
        this->m_database = m_database;
    }

    void updateDatabase(MemoryDatabase * m_database){
        this->m_database = m_database;
    }


    void createSphere(){


        //values hardcoded yet

        Ellipsoid ellipsoid;
        ellipsoid.SetSphere(Vector3D(0,0,0),1200);
        ellipsoid.SetName("Newly created sphere");

        m_database->Add(ellipsoid);

    }


};



#endif