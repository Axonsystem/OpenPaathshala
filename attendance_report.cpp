#include "attendance_report.h"
#include "ui_attendance_report.h"

Attendance_Report::Attendance_Report(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Attendance_Report)
{
    ui->setupUi(this);
}

Attendance_Report::~Attendance_Report()
{
    delete ui;
}
