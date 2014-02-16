#include "login.h"
#include "ui_login.h"
#include "dashboard.h"
#include <QString>
login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    setWindowTitle("OpenPathshala Login Section");
}

login::~login()
{
    delete ui;
}

void login::on_btnquit_clicked()
{
    exit(0); //user has press quit button...ah its time to exit from this world
}

void login::on_btnlogin_clicked()
{
    QString username=ui->txtusername->text();
    QString password=ui->txtpassword->text();
    dashboard *frm= new dashboard(); //creating object for administrative works
    this->hide();
    frm->show();



}
