#ifndef ATTENDANCE_REPORT_H
#define ATTENDANCE_REPORT_H

#include <QWidget>

namespace Ui {
class Attendance_Report;
}

class Attendance_Report : public QWidget
{
    Q_OBJECT
    
public:
    explicit Attendance_Report(QWidget *parent = 0);
    ~Attendance_Report();
    
private:
    Ui::Attendance_Report *ui;
};

#endif // ATTENDANCE_REPORT_H
