#ifndef NEWTRANSAPORATION_ROUTE_H
#define NEWTRANSAPORATION_ROUTE_H

#include <QMainWindow>

namespace Ui {
class newtransaporation_route;
}

class newtransaporation_route : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit newtransaporation_route(QWidget *parent = 0);
    ~newtransaporation_route();
    
private:
    Ui::newtransaporation_route *ui;
};

#endif // NEWTRANSAPORATION_ROUTE_H
