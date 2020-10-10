QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_unittests.cpp

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../Contabilidade/release/ -lContabilidade
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../Contabilidade/debug/ -lContabilidade
else:mac: LIBS += -F$$OUT_PWD/../Contabilidade/ -framework Contabilidade
else:unix: LIBS += -L$$OUT_PWD/../Contabilidade/ -lContabilidade

INCLUDEPATH += $$PWD/../Contabilidade
DEPENDPATH += $$PWD/../Contabilidade
