#-------------------------------------------------
#
# Project created by QtCreator 2018-11-14T18:36:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QT += sql
TARGET = Kursova
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    databasehelper.cpp \
    EducationProgressForms/educationprogressmainwindow.cpp \
    EducationProgressForms/quickaccesspanelitem.cpp \
    EducationProgressForms/adddatawindow.cpp \
    EducationProgressForms/studenrinputform.cpp \
    EducationProgressForms/lecturerinputform.cpp \
    EducationProgressForms/subjectinputform.cpp \
    EducationProgressForms/departmentsinputform.cpp \
    EducationProgressForms/groupinputform.cpp \
    EducationProgressForms/specialiyinputform.cpp

HEADERS += \
        mainwindow.h \
    databasehelper.h \
    EducationProgressForms/educationprogressmainwindow.h \
    EducationProgressForms/quickaccesspanelitem.h \
    EducationProgressForms/adddatawindow.h \
    EducationProgressForms/studenrinputform.h \
    EducationProgressForms/lecturerinputform.h \
    EducationProgressForms/subjectinputform.h \
    EducationProgressForms/departmentsinputform.h \
    EducationProgressForms/groupinputform.h \
    EducationProgressForms/specialiyinputform.h

FORMS += \
        mainwindow.ui \
    EducationProgressForms/educationprogressmainwindow.ui \
    EducationProgressForms/quickaccesspanelitem.ui \
    EducationProgressForms/adddatawindow.ui \
    EducationProgressForms/studenrinputform.ui \
    EducationProgressForms/lecturerinputform.ui \
    EducationProgressForms/subjectinputform.ui \
    EducationProgressForms/departmentsinputform.ui \
    EducationProgressForms/groupinputform.ui \
    EducationProgressForms/specialiyinputform.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
