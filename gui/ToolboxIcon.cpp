//
// Created by sadeep on 6/26/19.
//

#include <QtWidgets/QToolButton>

#include "../geometry/GeometryOperationsManager.cpp"
#include "../utils/Utils.cpp"

class ToolboxIcon : public QToolButton {
public:

    ApplicationContext * context;

    ToolboxIcon(QWidget* parent,const QIcon icon,ApplicationContext * context):QToolButton(parent){
        this->context = context;

        QVBoxLayout* layout = new QVBoxLayout();

        setIconSize(QSize(64, 64));
        setCheckable(false);
        setAutoRaise(true);
        setIcon(icon);

    }

protected:
    void mouseReleaseEvent(QMouseEvent *event) override {
        std::cout<<"uuu"<<endl;
        context->gom->createSphere();
        context->updateUiForDatabaseChanges();

    }
};