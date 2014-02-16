#-------------------------------------------------
#
# Project created by QtCreator 2014-02-11T19:27:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Openpathshala
TEMPLATE = app


SOURCES += main.cpp\
        login.cpp \
    dashboard.cpp \
    record_attendance.cpp \
    student_monthlyfeesetup.cpp \
    setup_newschool.cpp \
    result_generate.cpp \
    newtransaporation_route.cpp \
    openpathshala_registration.cpp \
    student.cpp \
    employee.cpp \
    student_search.cpp \
    attendance_register.cpp \
    attendance_report.cpp \
    courses.cpp \
    edit_course.cpp \
    gradingsystem.cpp \
    add_grade.cpp \
    add_subject.cpp \
    add_emp_category.cpp

HEADERS  += login.h \
    dashboard.h \
    record_attendance.h \
    student_monthlyfeesetup.h \
    setup_newschool.h \
    result_generate.h \
    newtransaporation_route.h \
    openpathshala_registration.h \
    student.h \
    employee.h \
    student_search.h \
    attendance_register.h \
    attendance_report.h \
    courses.h \
    edit_course.h \
    gradingsystem.h \
    add_grade.h \
    add_subject.h \
    add_emp_category.h

FORMS    += login.ui \
    dashboard.ui \
    record_attendance.ui \
    student_monthlyfeesetup.ui \
    setup_newschool.ui \
    result_generate.ui \
    newtransaporation_route.ui \
    openpathshala_registration.ui \
    student.ui \
    employee.ui \
    student_search.ui \
    attendance_register.ui \
    attendance_report.ui \
    courses.ui \
    edit_course.ui \
    gradingsystem.ui \
    add_grade.ui \
    add_subject.ui \
    add_emp_category.ui

RESOURCES += \
    icon.qrc
