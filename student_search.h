#ifndef STUDENT_SEARCH_H
#define STUDENT_SEARCH_H

#include <QWidget>

namespace Ui {
class student_search;
}

class student_search : public QWidget
{
    Q_OBJECT
    
public:
    explicit student_search(QWidget *parent = 0);
    ~student_search();
    
private:
    Ui::student_search *ui;
};

#endif // STUDENT_SEARCH_H
