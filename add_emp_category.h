#ifndef ADD_EMP_CATEGORY_H
#define ADD_EMP_CATEGORY_H

#include <QWidget>

namespace Ui {
class Add_Emp_Category;
}

class Add_Emp_Category : public QWidget
{
    Q_OBJECT
    
public:
    explicit Add_Emp_Category(QWidget *parent = 0);
    ~Add_Emp_Category();
    
private:
    Ui::Add_Emp_Category *ui;
};

#endif // ADD_EMP_CATEGORY_H
