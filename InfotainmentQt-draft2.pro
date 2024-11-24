QT += core
QT += gui
QT += multimediawidgets
QT += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = infotainmentQt-draft2
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS


CONFIG += c++14

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    entertainmentscreen.cpp \
    systeminterface.cpp \
    mp3.cpp \
    mp4.cpp \
    bluetooth.cpp \
    settings.cpp

HEADERS += \
    entertainmentscreen.hpp \
    systeminterface.hpp \
    targets.hpp

FORMS += \
    entertainmentscreen.ui

RESOURCES += \
    backgrounds.qrc \
    home_page.qrc \
    mp3.qrc \
    mp4.qrc \
    bluetooth.qrc \
    setting.qrc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
