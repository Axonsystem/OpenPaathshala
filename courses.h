#ifndef COURSES_H
#define COURSES_H

#include <QWidget>

namespace Ui {
class Courses;
}

class Courses : public QWidget
{
    Q_OBJECT
    
public:
    explicit Courses(QWidget *parent = 0);
    ~Courses();
    
private:
    Ui::Courses *ui;
};

#endif // COURSES_H
