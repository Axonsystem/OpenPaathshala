#ifndef RESULT_GENERATE_H
#define RESULT_GENERATE_H

#include <QMainWindow>

namespace Ui {
class Result_Generate;
}

class Result_Generate : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Result_Generate(QWidget *parent = 0);
    ~Result_Generate();
    
private:
    Ui::Result_Generate *ui;
};

#endif // RESULT_GENERATE_H
