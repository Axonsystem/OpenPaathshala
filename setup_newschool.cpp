#include "setup_newschool.h"
#include "ui_setup_newschool.h"

Setup_newschool::Setup_newschool(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Setup_newschool)
{
    ui->setupUi(this);
}

Setup_newschool::~Setup_newschool()
{
    delete ui;
}
