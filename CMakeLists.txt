
set(CMAKE_AUTOMOC ON)


set ( SOURCES main.cpp)
set ( RESOURCES resources.qrc)



find_package(Qt5Widgets REQUIRED)
find_package (Qt5Core REQUIRED)
find_package(OpenGL REQUIRED)

include_directories( ${CMAKE_BINARY_DIR} )



set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)



include_directories(${BRLCAD_INCLUDE_DIRS}
        ${RT3_SOURCE_DIR}/include/brlcad)


include_directories(${BRLCAD_INCLUDE_DIR})



add_executable(QtNewGUI main.cpp  display/GraphicsViewOpenGL.h resources.qrc)
qt5_use_modules(QtNewGUI Widgets  OpenGL)
target_link_libraries(QtNewGUI coreinterface  ${BRLCAD_NMG_LIBRARY} ${BRLCAD_WDB_LIBRARY} ${BRLCAD_RT_LIBRARY} ${BRLCAD_BN_LIBRARY} ${BRLCAD_BU_LIBRARY} ${OPENGL_LIBRARIES})
