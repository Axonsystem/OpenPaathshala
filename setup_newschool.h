#ifndef SETUP_NEWSCHOOL_H
#define SETUP_NEWSCHOOL_H

#include <QMainWindow>

namespace Ui {
class Setup_newschool;
}

class Setup_newschool : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Setup_newschool(QWidget *parent = 0);
    ~Setup_newschool();
    
private:
    Ui::Setup_newschool *ui;
};

#endif // SETUP_NEWSCHOOL_H
