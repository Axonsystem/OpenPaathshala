#ifndef STUDENT_MONTHLYFEESETUP_H
#define STUDENT_MONTHLYFEESETUP_H

#include <QMainWindow>

namespace Ui {
class student_monthlyfeesetup;
}

class student_monthlyfeesetup : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit student_monthlyfeesetup(QWidget *parent = 0);
    ~student_monthlyfeesetup();
    
private:
    Ui::student_monthlyfeesetup *ui;
};

#endif // STUDENT_MONTHLYFEESETUP_H
