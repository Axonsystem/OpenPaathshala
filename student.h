#ifndef STUDENT_H
#define STUDENT_H

#include <QWidget>

namespace Ui {
class student;
}

class student : public QWidget
{
    Q_OBJECT
    
public:
    explicit student(QWidget *parent = 0);
    ~student();
    
private:
    Ui::student *ui;
};

#endif // STUDENT_H
