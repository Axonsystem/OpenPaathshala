#include "add_grade.h"
#include "ui_add_grade.h"

Add_Grade::Add_Grade(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Add_Grade)
{
    ui->setupUi(this);
}

Add_Grade::~Add_Grade()
{
    delete ui;
}
