QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    actionreceipt.cpp \
    addpurchaseditem.cpp \
    deletepurchaseditem.cpp \
    homepage_employee.cpp \
    main.cpp \
    mainwindow.cpp \
    receiptpage.cpp \
    report.cpp \
    ..\src\app.cpp \
    ..\src\userimpl.cpp \
    ..\src\itemimpl.cpp \
    ..\src\purchaseimpl.cpp \
    ..\src\receiptimpl.cpp

HEADERS += \
    actionreceipt.h \
    addpurchaseditem.h \
    deletepurchaseditem.h \
    homepage_employee.h \
    mainwindow.h \
    receiptpage.h \
    report.h \
    ..\src\lib\app.h \
    ..\src\lib\user.h \
    ..\src\lib\item.h \
    ..\src\lib\purchase.h \
    ..\src\lib\receipt.h

FORMS += \
    actionreceipt.ui \
    addpurchaseditem.ui \
    deletepurchaseditem.ui \
    homepage_employee.ui \
    mainwindow.ui \
    receiptpage.ui \
    report.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
