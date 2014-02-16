#include "student_search.h"
#include "ui_student_search.h"

student_search::student_search(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::student_search)
{
    ui->setupUi(this);
}

student_search::~student_search()
{
    delete ui;
}
