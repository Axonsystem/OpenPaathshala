#include "record_attendance.h"
#include "ui_record_attendance.h"

record_attendance::record_attendance(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::record_attendance)
{
    ui->setupUi(this);
}

record_attendance::~record_attendance()
{
    delete ui;
}
