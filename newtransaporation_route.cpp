#include "newtransaporation_route.h"
#include "ui_newtransaporation_route.h"

newtransaporation_route::newtransaporation_route(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::newtransaporation_route)
{
    ui->setupUi(this);
}

newtransaporation_route::~newtransaporation_route()
{
    delete ui;
}
