#include "add_emp_category.h"
#include "ui_add_emp_category.h"

Add_Emp_Category::Add_Emp_Category(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Add_Emp_Category)
{
    ui->setupUi(this);
}

Add_Emp_Category::~Add_Emp_Category()
{
    delete ui;
}
