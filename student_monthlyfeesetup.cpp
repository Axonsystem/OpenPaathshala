#include "student_monthlyfeesetup.h"
#include "ui_student_monthlyfeesetup.h"

student_monthlyfeesetup::student_monthlyfeesetup(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::student_monthlyfeesetup)
{
    ui->setupUi(this);
}

student_monthlyfeesetup::~student_monthlyfeesetup()
{
    delete ui;
}
