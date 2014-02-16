#include "edit_course.h"
#include "ui_edit_course.h"

Edit_Course::Edit_Course(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Edit_Course)
{
    ui->setupUi(this);
}

Edit_Course::~Edit_Course()
{
    delete ui;
}
