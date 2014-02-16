#include "setup_newclass.h"
#include "ui_setup_newclass.h"

setup_newclass::setup_newclass(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::setup_newclass)
{
    ui->setupUi(this);
}

setup_newclass::~setup_newclass()
{
    delete ui;
}
