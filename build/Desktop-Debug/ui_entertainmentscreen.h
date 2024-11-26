/********************************************************************************
** Form generated from reading UI file 'entertainmentscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTERTAINMENTSCREEN_H
#define UI_ENTERTAINMENTSCREEN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Entertainmentscreen
{
public:
    QAction *actionOpen_File;
    QAction *actionOpen_File_Here;
    QWidget *centralwidget;
    QStackedWidget *entertainmentScreenSwitch;
    QWidget *startPage;
    QPushButton *startButton;
    QPushButton *darkLightMode;
    QLabel *dateText;
    QLabel *timeText;
    QWidget *homePage;
    QPushButton *settingsButton;
    QPushButton *mp3Button;
    QPushButton *mp4Button;
    QPushButton *bluetoothButton;
    QWidget *musicPage;
    QPushButton *musicIconmp3;
    QPushButton *homeButtonmp3;
    QPushButton *pausecontinueButton;
    QPushButton *forwardButton;
    QPushButton *backwardButton;
    QPushButton *shuffleButton;
    QSlider *volumeSlider;
    QPushButton *musicVolume;
    QSlider *musicSlider;
    QLabel *audioplayingtitle;
    QLabel *label;
    QLabel *timeDuration0;
    QLabel *timeDuration1;
    QWidget *videoPage;
    QPushButton *videoconmp4;
    QPushButton *homeButtonmp4;
    QPushButton *musicIconmp3_2;
    QMenuBar *menubar;
    QMenu *menuentertainmentscreen;
    QMenu *menuOpen;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Entertainmentscreen)
    {
        if (Entertainmentscreen->objectName().isEmpty())
            Entertainmentscreen->setObjectName("Entertainmentscreen");
        Entertainmentscreen->resize(800, 573);
        Entertainmentscreen->setMaximumSize(QSize(800, 600));
        Entertainmentscreen->setMouseTracking(false);
        Entertainmentscreen->setAutoFillBackground(true);
        actionOpen_File = new QAction(Entertainmentscreen);
        actionOpen_File->setObjectName("actionOpen_File");
        actionOpen_File_Here = new QAction(Entertainmentscreen);
        actionOpen_File_Here->setObjectName("actionOpen_File_Here");
        centralwidget = new QWidget(Entertainmentscreen);
        centralwidget->setObjectName("centralwidget");
        entertainmentScreenSwitch = new QStackedWidget(centralwidget);
        entertainmentScreenSwitch->setObjectName("entertainmentScreenSwitch");
        entertainmentScreenSwitch->setGeometry(QRect(0, 0, 1024, 600));
        entertainmentScreenSwitch->setAutoFillBackground(false);
        startPage = new QWidget();
        startPage->setObjectName("startPage");
        startButton = new QPushButton(startPage);
        startButton->setObjectName("startButton");
        startButton->setGeometry(QRect(410, 198, 196, 196));
        startButton->setAcceptDrops(true);
        startButton->setAutoFillBackground(false);
        startButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color\n"
"	background-color: rgb(6, A, 14);\n"
"	border:none;\n"
"}"));
        darkLightMode = new QPushButton(startPage);
        darkLightMode->setObjectName("darkLightMode");
        darkLightMode->setGeometry(QRect(870, 100, 60, 25));
        darkLightMode->setAutoFillBackground(false);
        darkLightMode->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:none;\n"
"}"));
        dateText = new QLabel(startPage);
        dateText->setObjectName("dateText");
        dateText->setGeometry(QRect(750, 30, 150, 20));
        timeText = new QLabel(startPage);
        timeText->setObjectName("timeText");
        timeText->setGeometry(QRect(900, 30, 80, 17));
        entertainmentScreenSwitch->addWidget(startPage);
        homePage = new QWidget();
        homePage->setObjectName("homePage");
        settingsButton = new QPushButton(homePage);
        settingsButton->setObjectName("settingsButton");
        settingsButton->setGeometry(QRect(200, 300, 100, 100));
        settingsButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"}"));
        mp3Button = new QPushButton(homePage);
        mp3Button->setObjectName("mp3Button");
        mp3Button->setGeometry(QRect(700, 100, 100, 100));
        mp3Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"}"));
        mp4Button = new QPushButton(homePage);
        mp4Button->setObjectName("mp4Button");
        mp4Button->setGeometry(QRect(200, 100, 100, 100));
        mp4Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"}"));
        bluetoothButton = new QPushButton(homePage);
        bluetoothButton->setObjectName("bluetoothButton");
        bluetoothButton->setGeometry(QRect(700, 300, 100, 100));
        bluetoothButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"}"));
        entertainmentScreenSwitch->addWidget(homePage);
        musicPage = new QWidget();
        musicPage->setObjectName("musicPage");
        musicIconmp3 = new QPushButton(musicPage);
        musicIconmp3->setObjectName("musicIconmp3");
        musicIconmp3->setGeometry(QRect(25, 80, 80, 40));
        musicIconmp3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"}"));
        homeButtonmp3 = new QPushButton(musicPage);
        homeButtonmp3->setObjectName("homeButtonmp3");
        homeButtonmp3->setGeometry(QRect(462, 480, 100, 50));
        homeButtonmp3->setAutoFillBackground(false);
        homeButtonmp3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"outline: none;\n"
"}"));
        pausecontinueButton = new QPushButton(musicPage);
        pausecontinueButton->setObjectName("pausecontinueButton");
        pausecontinueButton->setGeometry(QRect(492, 400, 41, 40));
        pausecontinueButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"outline: none;\n"
"}"));
        forwardButton = new QPushButton(musicPage);
        forwardButton->setObjectName("forwardButton");
        forwardButton->setGeometry(QRect(532, 400, 40, 40));
        forwardButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"outline: none;\n"
"}"));
        backwardButton = new QPushButton(musicPage);
        backwardButton->setObjectName("backwardButton");
        backwardButton->setGeometry(QRect(452, 400, 40, 40));
        backwardButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"outline: none;\n"
"}"));
        shuffleButton = new QPushButton(musicPage);
        shuffleButton->setObjectName("shuffleButton");
        shuffleButton->setGeometry(QRect(270, 445, 40, 40));
        shuffleButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"outline: none;\n"
"}"));
        volumeSlider = new QSlider(musicPage);
        volumeSlider->setObjectName("volumeSlider");
        volumeSlider->setGeometry(QRect(760, 445, 100, 40));
        volumeSlider->setStyleSheet(QString::fromUtf8("QSlider {\n"
"    from: 1\n"
"    value: 25\n"
"    to: 100\n"
"}"));
        volumeSlider->setOrientation(Qt::Orientation::Horizontal);
        musicVolume = new QPushButton(musicPage);
        musicVolume->setObjectName("musicVolume");
        musicVolume->setGeometry(QRect(720, 445, 40, 40));
        musicVolume->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"outline: none;\n"
"}"));
        musicSlider = new QSlider(musicPage);
        musicSlider->setObjectName("musicSlider");
        musicSlider->setGeometry(QRect(412, 455, 200, 20));
        musicSlider->setOrientation(Qt::Orientation::Horizontal);
        audioplayingtitle = new QLabel(musicPage);
        audioplayingtitle->setObjectName("audioplayingtitle");
        audioplayingtitle->setGeometry(QRect(250, 220, 231, 17));
        label = new QLabel(musicPage);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 220, 101, 17));
        timeDuration0 = new QLabel(musicPage);
        timeDuration0->setObjectName("timeDuration0");
        timeDuration0->setGeometry(QRect(350, 455, 60, 17));
        timeDuration0->setAlignment(Qt::AlignmentFlag::AlignCenter);
        timeDuration1 = new QLabel(musicPage);
        timeDuration1->setObjectName("timeDuration1");
        timeDuration1->setGeometry(QRect(620, 455, 60, 17));
        timeDuration1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        entertainmentScreenSwitch->addWidget(musicPage);
        videoPage = new QWidget();
        videoPage->setObjectName("videoPage");
        videoconmp4 = new QPushButton(videoPage);
        videoconmp4->setObjectName("videoconmp4");
        videoconmp4->setGeometry(QRect(25, 80, 80, 40));
        videoconmp4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"}"));
        homeButtonmp4 = new QPushButton(videoPage);
        homeButtonmp4->setObjectName("homeButtonmp4");
        homeButtonmp4->setGeometry(QRect(462, 480, 100, 50));
        homeButtonmp4->setAutoFillBackground(false);
        homeButtonmp4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #4caf50;\n"
"color: white;\n"
"border:none;\n"
"outline: none;\n"
"}"));
        entertainmentScreenSwitch->addWidget(videoPage);
        musicIconmp3_2 = new QPushButton(centralwidget);
        musicIconmp3_2->setObjectName("musicIconmp3_2");
        musicIconmp3_2->setGeometry(QRect(40, 40, 89, 25));
        musicIconmp3_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"}"));
        Entertainmentscreen->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Entertainmentscreen);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuentertainmentscreen = new QMenu(menubar);
        menuentertainmentscreen->setObjectName("menuentertainmentscreen");
        menuOpen = new QMenu(menubar);
        menuOpen->setObjectName("menuOpen");
        Entertainmentscreen->setMenuBar(menubar);
        statusbar = new QStatusBar(Entertainmentscreen);
        statusbar->setObjectName("statusbar");
        Entertainmentscreen->setStatusBar(statusbar);

        menubar->addAction(menuentertainmentscreen->menuAction());
        menubar->addAction(menuOpen->menuAction());
        menuentertainmentscreen->addSeparator();
        menuentertainmentscreen->addAction(actionOpen_File);
        menuOpen->addAction(actionOpen_File_Here);

        retranslateUi(Entertainmentscreen);

        entertainmentScreenSwitch->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Entertainmentscreen);
    } // setupUi

    void retranslateUi(QMainWindow *Entertainmentscreen)
    {
        Entertainmentscreen->setWindowTitle(QCoreApplication::translate("Entertainmentscreen", "Entertainmentscreen", nullptr));
        actionOpen_File->setText(QCoreApplication::translate("Entertainmentscreen", "Open File", nullptr));
        actionOpen_File_Here->setText(QCoreApplication::translate("Entertainmentscreen", "Open Audio File", nullptr));
        startButton->setText(QString());
        darkLightMode->setText(QString());
        dateText->setText(QString());
        timeText->setText(QString());
        settingsButton->setText(QString());
        mp3Button->setText(QString());
        mp4Button->setText(QString());
        bluetoothButton->setText(QString());
        musicIconmp3->setText(QString());
        homeButtonmp3->setText(QString());
        pausecontinueButton->setText(QString());
        forwardButton->setText(QString());
        backwardButton->setText(QString());
        shuffleButton->setText(QString());
        musicVolume->setText(QString());
        audioplayingtitle->setText(QCoreApplication::translate("Entertainmentscreen", "FILE_NAME", nullptr));
        label->setText(QCoreApplication::translate("Entertainmentscreen", "Audio Playing:", nullptr));
        timeDuration0->setText(QCoreApplication::translate("Entertainmentscreen", "00:00:00", nullptr));
        timeDuration1->setText(QCoreApplication::translate("Entertainmentscreen", "00:00:00", nullptr));
        videoconmp4->setText(QString());
        homeButtonmp4->setText(QString());
        musicIconmp3_2->setText(QString());
        menuentertainmentscreen->setTitle(QCoreApplication::translate("Entertainmentscreen", "NeuroDrive", nullptr));
        menuOpen->setTitle(QCoreApplication::translate("Entertainmentscreen", "Open", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Entertainmentscreen: public Ui_Entertainmentscreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTERTAINMENTSCREEN_H
