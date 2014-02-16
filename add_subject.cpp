#include "add_subject.h"
#include "ui_add_subject.h"

Add_Subject::Add_Subject(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Add_Subject)
{
    ui->setupUi(this);
}

Add_Subject::~Add_Subject()
{
    delete ui;
}
