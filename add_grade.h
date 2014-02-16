#ifndef ADD_GRADE_H
#define ADD_GRADE_H

#include <QWidget>

namespace Ui {
class Add_Grade;
}

class Add_Grade : public QWidget
{
    Q_OBJECT
    
public:
    explicit Add_Grade(QWidget *parent = 0);
    ~Add_Grade();
    
private:
    Ui::Add_Grade *ui;
};

#endif // ADD_GRADE_H
