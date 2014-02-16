#include "gradingsystem.h"
#include "ui_gradingsystem.h"

Gradingsystem::Gradingsystem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Gradingsystem)
{
    ui->setupUi(this);
}

Gradingsystem::~Gradingsystem()
{
    delete ui;
}
