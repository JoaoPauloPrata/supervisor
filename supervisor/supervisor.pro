QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    actionreceipt.cpp \
    addpurchaseditem.cpp \
    app.cpp \
    deletepurchaseditem.cpp \
    homepage_employee.cpp \
    item.cpp \
    main.cpp \
    mainwindow.cpp \
    receipt.cpp \
    report.cpp \
    user.cpp \
    userimpl.cpp

HEADERS += \
    actionreceipt.h \
    addpurchaseditem.h \
    app.h \
    deletepurchaseditem.h \
    homepage_employee.h \
    item.h \
    mainwindow.h \
    receipt.h \
    report.h \
    user.h \
    userimpl.h

FORMS += \
    actionreceipt.ui \
    addpurchaseditem.ui \
    deletepurchaseditem.ui \
    homepage_employee.ui \
    mainwindow.ui \
    receipt.ui \
    report.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
