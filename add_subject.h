#ifndef ADD_SUBJECT_H
#define ADD_SUBJECT_H

#include <QWidget>

namespace Ui {
class Add_Subject;
}

class Add_Subject : public QWidget
{
    Q_OBJECT
    
public:
    explicit Add_Subject(QWidget *parent = 0);
    ~Add_Subject();
    
private:
    Ui::Add_Subject *ui;
};

#endif // ADD_SUBJECT_H
