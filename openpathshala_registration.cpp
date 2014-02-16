#include "openpathshala_registration.h"
#include "ui_openpathshala_registration.h"

Openpathshala_registration::Openpathshala_registration(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Openpathshala_registration)
{
    ui->setupUi(this);
}

Openpathshala_registration::~Openpathshala_registration()
{
    delete ui;
}
