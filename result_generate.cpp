#include "result_generate.h"
#include "ui_result_generate.h"

Result_Generate::Result_Generate(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Result_Generate)
{
    ui->setupUi(this);
}

Result_Generate::~Result_Generate()
{
    delete ui;
}
