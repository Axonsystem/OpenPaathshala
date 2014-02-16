#include "addnewstudent.h"
#include "ui_addnewstudent.h"

addnewstudent::addnewstudent(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::addnewstudent)
{
    ui->setupUi(this);
}

addnewstudent::~addnewstudent()
{
    delete ui;
}
