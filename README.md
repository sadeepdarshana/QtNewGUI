# QtNewGUI
Place this as trunk/src/QtNewGUI in a RT^3 clone.
Add it to the CMakeList of the parent project

Like this,
```
#Libs next
ADD_SUBDIRECTORY(./date)
ADD_SUBDIRECTORY(./libge)
ADD_SUBDIRECTORY(./coreInterface)
ADD_SUBDIRECTORY(./embeddedLua)
ADD_SUBDIRECTORY(./QtGUI)
ADD_SUBDIRECTORY(./QtNewGUI) // <------- this here
```
