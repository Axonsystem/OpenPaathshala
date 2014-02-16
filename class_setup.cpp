#include "class_setup.h"
#include "ui_class_setup.h"

class_setup::class_setup(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::class_setup)
{
    ui->setupUi(this);
}

class_setup::~class_setup()
{
    delete ui;
}
