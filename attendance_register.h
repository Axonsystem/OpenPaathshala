#ifndef ATTENDANCE_REGISTER_H
#define ATTENDANCE_REGISTER_H

#include <QWidget>

namespace Ui {
class Attendance_register;
}

class Attendance_register : public QWidget
{
    Q_OBJECT
    
public:
    explicit Attendance_register(QWidget *parent = 0);
    ~Attendance_register();
    
private:
    Ui::Attendance_register *ui;
};

#endif // ATTENDANCE_REGISTER_H
