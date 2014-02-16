#ifndef OPENPATHSHALA_REGISTRATION_H
#define OPENPATHSHALA_REGISTRATION_H

#include <QMainWindow>

namespace Ui {
class Openpathshala_registration;
}

class Openpathshala_registration : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Openpathshala_registration(QWidget *parent = 0);
    ~Openpathshala_registration();
    
private:
    Ui::Openpathshala_registration *ui;
};

#endif // OPENPATHSHALA_REGISTRATION_H
