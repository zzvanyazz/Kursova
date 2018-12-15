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
    databasehelper.cpp \
    EducationProgressForms/educationprogressmainwindow.cpp \
    EducationProgressForms/quickaccesspanelitem.cpp \
    EducationProgressForms/adddatawindow.cpp \
    EducationProgressForms/InputForms/studenrinputform.cpp \
    EducationProgressForms/InputForms/lecturerinputform.cpp \
    EducationProgressForms/InputForms/subjectinputform.cpp \
    EducationProgressForms/InputForms/departmentsinputform.cpp \
    EducationProgressForms/InputForms/groupinputform.cpp \
    EducationProgressForms/InputForms/specialiyinputform.cpp \
    EducationProgressForms/InputForms/markinputform.cpp \
    EducationProgressForms/repairdatamainwindow.cpp \
    EducationProgressForms/RepairForms/departmentrepairform.cpp \
    EducationProgressForms/RepairForms/specialityrepairform.cpp \
    EducationProgressForms/RepairForms/grouprepairform.cpp \
    EducationProgressForms/RepairForms/studentrepairform.cpp \
    EducationProgressForms/RepairForms/lecturerrepairform.cpp \
    EducationProgressForms/RepairForms/subjectrepairform.cpp

HEADERS += \
    databasehelper.h \
    EducationProgressForms/educationprogressmainwindow.h \
    EducationProgressForms/quickaccesspanelitem.h \
    EducationProgressForms/adddatawindow.h \
    EducationProgressForms/InputForms/studenrinputform.h \
    EducationProgressForms/InputForms/lecturerinputform.h \
    EducationProgressForms/InputForms/subjectinputform.h \
    EducationProgressForms/InputForms/departmentsinputform.h \
    EducationProgressForms/InputForms/groupinputform.h \
    EducationProgressForms/InputForms/specialiyinputform.h \
    EducationProgressForms/InputForms/markinputform.h \
    EducationProgressForms/repairdatamainwindow.h \
    EducationProgressForms/RepairForms/departmentrepairform.h \
    EducationProgressForms/RepairForms/specialityrepairform.h \
    EducationProgressForms/RepairForms/grouprepairform.h \
    EducationProgressForms/RepairForms/studentrepairform.h \
    EducationProgressForms/RepairForms/lecturerrepairform.h \
    EducationProgressForms/RepairForms/subjectrepairform.h


FORMS += \
    EducationProgressForms/educationprogressmainwindow.ui \
    EducationProgressForms/quickaccesspanelitem.ui \
    EducationProgressForms/adddatawindow.ui \
    EducationProgressForms/InputForms/studenrinputform.ui \
    EducationProgressForms/InputForms/lecturerinputform.ui \
    EducationProgressForms/InputForms/subjectinputform.ui \
    EducationProgressForms/InputForms/departmentsinputform.ui \
    EducationProgressForms/InputForms/groupinputform.ui \
    EducationProgressForms/InputForms/specialiyinputform.ui \
    EducationProgressForms/InputForms/markinputform.ui \
    EducationProgressForms/repairdatamainwindow.ui \
    EducationProgressForms/RepairForms/departmentrepairform.ui \
    EducationProgressForms/RepairForms/specialityrepairform.ui \
    EducationProgressForms/RepairForms/grouprepairform.ui \
    EducationProgressForms/RepairForms/studentrepairform.ui \
    EducationProgressForms/RepairForms/lecturerrepairform.ui \
    EducationProgressForms/RepairForms/subjectrepairform.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    diagram.qmodel

STATECHARTS +=
