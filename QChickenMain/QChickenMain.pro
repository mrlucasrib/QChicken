QT       += core gui
QT       += charts
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    qchickenmain.cpp \
    relatoriowindow.cpp

HEADERS += \
    qchickenmain.h \
    relatoriowindow.h

FORMS += \
    qchickenmain.ui \
    relatoriowindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../API/Contabilidade/release/ -lContabilidade
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../API/Contabilidade/debug/ -lContabilidade
else:unix: LIBS += -L$$OUT_PWD/../API/Contabilidade/ -lContabilidade

INCLUDEPATH += $$PWD/../API/Contabilidade
DEPENDPATH += $$PWD/../API/Contabilidade
