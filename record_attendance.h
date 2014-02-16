#ifndef RECORD_ATTENDANCE_H
#define RECORD_ATTENDANCE_H

#include <QMainWindow>

namespace Ui {
class record_attendance;
}

class record_attendance : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit record_attendance(QWidget *parent = 0);
    ~record_attendance();
    
private:
    Ui::record_attendance *ui;
};

#endif // RECORD_ATTENDANCE_H
