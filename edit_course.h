#ifndef EDIT_COURSE_H
#define EDIT_COURSE_H

#include <QWidget>

namespace Ui {
class Edit_Course;
}

class Edit_Course : public QWidget
{
    Q_OBJECT
    
public:
    explicit Edit_Course(QWidget *parent = 0);
    ~Edit_Course();
    
private:
    Ui::Edit_Course *ui;
};

#endif // EDIT_COURSE_H
