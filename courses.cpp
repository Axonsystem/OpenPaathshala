#include "courses.h"
#include "ui_courses.h"

Courses::Courses(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Courses)
{
    ui->setupUi(this);
}

Courses::~Courses()
{
    delete ui;
}
