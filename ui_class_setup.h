/********************************************************************************
** Form generated from reading UI file 'setup_newclass.ui'
**
** Created: Sat Feb 15 13:34:25 2014
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS_SETUP_H
#define UI_CLASS_SETUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setup_newclass
{
public:
    QWidget *centralwidget;
    QLabel *lblheader;
    QLabel *lbldescription;
    QLabel *lblshortname;
    QLabel *lblinchargename;
    QLabel *lblclasshedule;
    QLabel *lblmaxstd;
    QLabel *lblminstd;
    QLabel *lblstarttime;
    QLabel *lblendtime;
    QLabel *lblremarks;
    QLineEdit *txtinchargename;
    QLineEdit *txtmaxstd;
    QLineEdit *txtclasshedule;
    QLineEdit *txtminstd;
    QLineEdit *txtdescription;
    QLineEdit *txtshortname;
    QDoubleSpinBox *combostarttime;
    QDoubleSpinBox *comboendtime;
    QTextEdit *txtremark;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnprev;
    QPushButton *btnnext;
    QPushButton *btnsave;
    QPushButton *btnquit;
    QMenuBar *menubar;

    void setupUi(QMainWindow *setup_newclass)
    {
        if (setup_newclass->objectName().isEmpty())
            setup_newclass->setObjectName(QString::fromUtf8("setup_newclass"));
        setup_newclass->resize(765, 503);
        centralwidget = new QWidget(setup_newclass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lblheader = new QLabel(centralwidget);
        lblheader->setObjectName(QString::fromUtf8("lblheader"));
        lblheader->setGeometry(QRect(10, 10, 741, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        lblheader->setFont(font);
        lblheader->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 127);\n"
"color: rgb(255, 255, 255);"));
        lblheader->setMargin(299);
        lbldescription = new QLabel(centralwidget);
        lbldescription->setObjectName(QString::fromUtf8("lbldescription"));
        lbldescription->setGeometry(QRect(40, 66, 103, 13));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        lbldescription->setFont(font1);
        lblshortname = new QLabel(centralwidget);
        lblshortname->setObjectName(QString::fromUtf8("lblshortname"));
        lblshortname->setGeometry(QRect(40, 99, 103, 13));
        lblshortname->setFont(font1);
        lblinchargename = new QLabel(centralwidget);
        lblinchargename->setObjectName(QString::fromUtf8("lblinchargename"));
        lblinchargename->setGeometry(QRect(40, 128, 103, 20));
        lblinchargename->setFont(font1);
        lblclasshedule = new QLabel(centralwidget);
        lblclasshedule->setObjectName(QString::fromUtf8("lblclasshedule"));
        lblclasshedule->setGeometry(QRect(390, 130, 103, 13));
        lblclasshedule->setFont(font1);
        lblmaxstd = new QLabel(centralwidget);
        lblmaxstd->setObjectName(QString::fromUtf8("lblmaxstd"));
        lblmaxstd->setGeometry(QRect(40, 165, 103, 13));
        lblmaxstd->setFont(font1);
        lblminstd = new QLabel(centralwidget);
        lblminstd->setObjectName(QString::fromUtf8("lblminstd"));
        lblminstd->setGeometry(QRect(390, 165, 103, 13));
        lblminstd->setFont(font1);
        lblstarttime = new QLabel(centralwidget);
        lblstarttime->setObjectName(QString::fromUtf8("lblstarttime"));
        lblstarttime->setGeometry(QRect(40, 201, 103, 13));
        lblstarttime->setFont(font1);
        lblendtime = new QLabel(centralwidget);
        lblendtime->setObjectName(QString::fromUtf8("lblendtime"));
        lblendtime->setGeometry(QRect(390, 201, 103, 13));
        lblendtime->setFont(font1);
        lblremarks = new QLabel(centralwidget);
        lblremarks->setObjectName(QString::fromUtf8("lblremarks"));
        lblremarks->setGeometry(QRect(41, 230, 103, 13));
        lblremarks->setFont(font1);
        txtinchargename = new QLineEdit(centralwidget);
        txtinchargename->setObjectName(QString::fromUtf8("txtinchargename"));
        txtinchargename->setGeometry(QRect(150, 126, 180, 25));
        txtmaxstd = new QLineEdit(centralwidget);
        txtmaxstd->setObjectName(QString::fromUtf8("txtmaxstd"));
        txtmaxstd->setGeometry(QRect(150, 160, 180, 25));
        txtclasshedule = new QLineEdit(centralwidget);
        txtclasshedule->setObjectName(QString::fromUtf8("txtclasshedule"));
        txtclasshedule->setGeometry(QRect(502, 126, 180, 25));
        txtminstd = new QLineEdit(centralwidget);
        txtminstd->setObjectName(QString::fromUtf8("txtminstd"));
        txtminstd->setGeometry(QRect(502, 160, 180, 25));
        txtdescription = new QLineEdit(centralwidget);
        txtdescription->setObjectName(QString::fromUtf8("txtdescription"));
        txtdescription->setGeometry(QRect(150, 60, 180, 25));
        txtshortname = new QLineEdit(centralwidget);
        txtshortname->setObjectName(QString::fromUtf8("txtshortname"));
        txtshortname->setGeometry(QRect(150, 93, 180, 25));
        combostarttime = new QDoubleSpinBox(centralwidget);
        combostarttime->setObjectName(QString::fromUtf8("combostarttime"));
        combostarttime->setGeometry(QRect(150, 196, 180, 25));
        comboendtime = new QDoubleSpinBox(centralwidget);
        comboendtime->setObjectName(QString::fromUtf8("comboendtime"));
        comboendtime->setGeometry(QRect(502, 196, 180, 25));
        txtremark = new QTextEdit(centralwidget);
        txtremark->setObjectName(QString::fromUtf8("txtremark"));
        txtremark->setGeometry(QRect(40, 250, 460, 190));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 460, 691, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnprev = new QPushButton(widget);
        btnprev->setObjectName(QString::fromUtf8("btnprev"));

        horizontalLayout->addWidget(btnprev);

        btnnext = new QPushButton(widget);
        btnnext->setObjectName(QString::fromUtf8("btnnext"));

        horizontalLayout->addWidget(btnnext);

        btnsave = new QPushButton(widget);
        btnsave->setObjectName(QString::fromUtf8("btnsave"));

        horizontalLayout->addWidget(btnsave);

        btnquit = new QPushButton(widget);
        btnquit->setObjectName(QString::fromUtf8("btnquit"));

        horizontalLayout->addWidget(btnquit);

        setup_newclass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(setup_newclass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 765, 21));
        setup_newclass->setMenuBar(menubar);

        retranslateUi(setup_newclass);

        QMetaObject::connectSlotsByName(setup_newclass);
    } // setupUi

    void retranslateUi(QMainWindow *setup_newclass)
    {
        setup_newclass->setWindowTitle(QApplication::translate("setup_newclass", "MainWindow", 0, QApplication::UnicodeUTF8));
        lblheader->setText(QApplication::translate("setup_newclass", "CLASS SETUP", 0, QApplication::UnicodeUTF8));
        lbldescription->setText(QApplication::translate("setup_newclass", "Description", 0, QApplication::UnicodeUTF8));
        lblshortname->setText(QApplication::translate("setup_newclass", "Short Name", 0, QApplication::UnicodeUTF8));
        lblinchargename->setText(QApplication::translate("setup_newclass", "Incharge Name", 0, QApplication::UnicodeUTF8));
        lblclasshedule->setText(QApplication::translate("setup_newclass", "Class Shedule", 0, QApplication::UnicodeUTF8));
        lblmaxstd->setText(QApplication::translate("setup_newclass", "Max Student", 0, QApplication::UnicodeUTF8));
        lblminstd->setText(QApplication::translate("setup_newclass", "Min Student", 0, QApplication::UnicodeUTF8));
        lblstarttime->setText(QApplication::translate("setup_newclass", "Start Time", 0, QApplication::UnicodeUTF8));
        lblendtime->setText(QApplication::translate("setup_newclass", "End Time", 0, QApplication::UnicodeUTF8));
        lblremarks->setText(QApplication::translate("setup_newclass", "Remarks", 0, QApplication::UnicodeUTF8));
        btnprev->setText(QApplication::translate("setup_newclass", "Previous", 0, QApplication::UnicodeUTF8));
        btnnext->setText(QApplication::translate("setup_newclass", "Next ", 0, QApplication::UnicodeUTF8));
        btnsave->setText(QApplication::translate("setup_newclass", "Save", 0, QApplication::UnicodeUTF8));
        btnquit->setText(QApplication::translate("setup_newclass", "Quit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class setup_newclass: public Ui_setup_newclass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS_SETUP_H
