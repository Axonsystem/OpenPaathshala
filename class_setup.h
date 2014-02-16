#ifndef CLASS_SETUP_H
#define CLASS_SETUP_H

#include <QMainWindow>

namespace Ui {
class class_setup;
}

class class_setup : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit class_setup(QWidget *parent = 0);
    ~class_setup();
    
private:
    Ui::class_setup *ui;
};

#endif // CLASS_SETUP_H
