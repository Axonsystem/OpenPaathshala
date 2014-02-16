#ifndef GRADINGSYSTEM_H
#define GRADINGSYSTEM_H

#include <QWidget>

namespace Ui {
class Gradingsystem;
}

class Gradingsystem : public QWidget
{
    Q_OBJECT
    
public:
    explicit Gradingsystem(QWidget *parent = 0);
    ~Gradingsystem();
    
private:
    Ui::Gradingsystem *ui;
};

#endif // GRADINGSYSTEM_H
