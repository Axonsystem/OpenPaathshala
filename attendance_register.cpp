#include "attendance_register.h"
#include "ui_attendance_register.h"

Attendance_register::Attendance_register(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Attendance_register)
{
    ui->setupUi(this);
}

Attendance_register::~Attendance_register()
{
    delete ui;
}
