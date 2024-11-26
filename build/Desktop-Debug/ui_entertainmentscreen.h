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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
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
    QPushButton *carDiagnosticsButton;
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
    QListWidget *runningSongsList;
    QWidget *calcolatorPage;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_20;
    QPushButton *pushButton_18;
    QWidget *carDiagnosticPage;
    QPushButton *carPictureButton;
    QCheckBox *checkBox;
    QLabel *backTierIssue;
    QWidget *preVideoPage;
    QPushButton *videoconmp4;
    QPushButton *homeButtonmp4;
    QWidget *videoPage;
    QPushButton *videoconmp4_2;
    QPushButton *homeButtonmp4_2;
    QPushButton *pushButton_19;
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
        settingsButton->setGeometry(QRect(100, 300, 100, 100));
        settingsButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"}"));
        mp3Button = new QPushButton(homePage);
        mp3Button->setObjectName("mp3Button");
        mp3Button->setGeometry(QRect(300, 100, 100, 100));
        mp3Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"}"));
        mp4Button = new QPushButton(homePage);
        mp4Button->setObjectName("mp4Button");
        mp4Button->setGeometry(QRect(100, 100, 100, 100));
        mp4Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"}"));
        bluetoothButton = new QPushButton(homePage);
        bluetoothButton->setObjectName("bluetoothButton");
        bluetoothButton->setGeometry(QRect(300, 300, 100, 100));
        bluetoothButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"}"));
        carDiagnosticsButton = new QPushButton(homePage);
        carDiagnosticsButton->setObjectName("carDiagnosticsButton");
        carDiagnosticsButton->setGeometry(QRect(500, 100, 100, 100));
        carDiagnosticsButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        runningSongsList = new QListWidget(musicPage);
        runningSongsList->setObjectName("runningSongsList");
        runningSongsList->setGeometry(QRect(340, 110, 256, 192));
        entertainmentScreenSwitch->addWidget(musicPage);
        calcolatorPage = new QWidget();
        calcolatorPage->setObjectName("calcolatorPage");
        label_2 = new QLabel(calcolatorPage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 400, 61));
        pushButton = new QPushButton(calcolatorPage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(80, 20, 100, 100));
        pushButton_2 = new QPushButton(calcolatorPage);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(180, 20, 100, 100));
        pushButton_3 = new QPushButton(calcolatorPage);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(280, 20, 100, 100));
        pushButton_4 = new QPushButton(calcolatorPage);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(380, 20, 100, 100));
        pushButton_5 = new QPushButton(calcolatorPage);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(380, 120, 100, 100));
        pushButton_6 = new QPushButton(calcolatorPage);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(80, 120, 100, 100));
        pushButton_7 = new QPushButton(calcolatorPage);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(180, 120, 100, 100));
        pushButton_8 = new QPushButton(calcolatorPage);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(280, 120, 100, 100));
        pushButton_9 = new QPushButton(calcolatorPage);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(380, 220, 100, 100));
        pushButton_10 = new QPushButton(calcolatorPage);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(80, 220, 100, 100));
        pushButton_11 = new QPushButton(calcolatorPage);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(180, 220, 100, 100));
        pushButton_12 = new QPushButton(calcolatorPage);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(280, 220, 100, 100));
        pushButton_13 = new QPushButton(calcolatorPage);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(380, 320, 100, 100));
        pushButton_14 = new QPushButton(calcolatorPage);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setGeometry(QRect(80, 320, 100, 100));
        pushButton_15 = new QPushButton(calcolatorPage);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setGeometry(QRect(180, 320, 100, 100));
        pushButton_16 = new QPushButton(calcolatorPage);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setGeometry(QRect(280, 320, 100, 100));
        pushButton_17 = new QPushButton(calcolatorPage);
        pushButton_17->setObjectName("pushButton_17");
        pushButton_17->setGeometry(QRect(380, 420, 100, 100));
        pushButton_20 = new QPushButton(calcolatorPage);
        pushButton_20->setObjectName("pushButton_20");
        pushButton_20->setGeometry(QRect(280, 420, 100, 100));
        pushButton_18 = new QPushButton(calcolatorPage);
        pushButton_18->setObjectName("pushButton_18");
        pushButton_18->setGeometry(QRect(80, 420, 201, 100));
        entertainmentScreenSwitch->addWidget(calcolatorPage);
        carDiagnosticPage = new QWidget();
        carDiagnosticPage->setObjectName("carDiagnosticPage");
        carPictureButton = new QPushButton(carDiagnosticPage);
        carPictureButton->setObjectName("carPictureButton");
        carPictureButton->setGeometry(QRect(0, 0, 1024, 600));
        carPictureButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"}"));
        checkBox = new QCheckBox(carDiagnosticPage);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(110, 60, 131, 23));
        backTierIssue = new QLabel(carDiagnosticPage);
        backTierIssue->setObjectName("backTierIssue");
        backTierIssue->setGeometry(QRect(270, 500, 661, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("DejaVu Sans")});
        font.setBold(true);
        font.setItalic(true);
        backTierIssue->setFont(font);
        backTierIssue->setAutoFillBackground(true);
        backTierIssue->setStyleSheet(QString::fromUtf8("QLabel{\n"
"text: \"There's issues with this tier please go to the Maintenance center to be safe\"\n"
"border:none;\n"
"color:red;\n"
"font.pixelSize: 22\n"
"font.italic: true\n"
"}"));
        backTierIssue->setFrameShape(QFrame::Shape::Box);
        backTierIssue->setFrameShadow(QFrame::Shadow::Raised);
        backTierIssue->setTextFormat(Qt::TextFormat::AutoText);
        backTierIssue->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        backTierIssue->setWordWrap(false);
        backTierIssue->setOpenExternalLinks(false);
        backTierIssue->setTextInteractionFlags(Qt::TextInteractionFlag::TextEditable|Qt::TextInteractionFlag::TextSelectableByKeyboard);
        entertainmentScreenSwitch->addWidget(carDiagnosticPage);
        preVideoPage = new QWidget();
        preVideoPage->setObjectName("preVideoPage");
        videoconmp4 = new QPushButton(preVideoPage);
        videoconmp4->setObjectName("videoconmp4");
        videoconmp4->setGeometry(QRect(25, 80, 80, 40));
        videoconmp4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"}"));
        homeButtonmp4 = new QPushButton(preVideoPage);
        homeButtonmp4->setObjectName("homeButtonmp4");
        homeButtonmp4->setGeometry(QRect(462, 480, 100, 50));
        homeButtonmp4->setAutoFillBackground(false);
        homeButtonmp4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #4caf50;\n"
"color: white;\n"
"border:none;\n"
"outline: none;\n"
"}"));
        entertainmentScreenSwitch->addWidget(preVideoPage);
        videoPage = new QWidget();
        videoPage->setObjectName("videoPage");
        videoconmp4_2 = new QPushButton(videoPage);
        videoconmp4_2->setObjectName("videoconmp4_2");
        videoconmp4_2->setGeometry(QRect(25, 80, 80, 40));
        videoconmp4_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"}"));
        homeButtonmp4_2 = new QPushButton(videoPage);
        homeButtonmp4_2->setObjectName("homeButtonmp4_2");
        homeButtonmp4_2->setGeometry(QRect(462, 480, 100, 50));
        homeButtonmp4_2->setAutoFillBackground(false);
        homeButtonmp4_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #4caf50;\n"
"color: white;\n"
"border:none;\n"
"outline: none;\n"
"}"));
        pushButton_19 = new QPushButton(videoPage);
        pushButton_19->setObjectName("pushButton_19");
        pushButton_19->setGeometry(QRect(20, 470, 89, 25));
        entertainmentScreenSwitch->addWidget(videoPage);
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

        entertainmentScreenSwitch->setCurrentIndex(4);


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
        carDiagnosticsButton->setText(QString());
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
        label_2->setText(QCoreApplication::translate("Entertainmentscreen", "0", nullptr));
        pushButton->setText(QCoreApplication::translate("Entertainmentscreen", "C", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Entertainmentscreen", "+/-", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Entertainmentscreen", "%", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Entertainmentscreen", "/", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Entertainmentscreen", "X", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Entertainmentscreen", "7", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Entertainmentscreen", "8", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Entertainmentscreen", "9", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Entertainmentscreen", "-", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Entertainmentscreen", "4", nullptr));
        pushButton_11->setText(QCoreApplication::translate("Entertainmentscreen", "5", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Entertainmentscreen", "6", nullptr));
        pushButton_13->setText(QCoreApplication::translate("Entertainmentscreen", "+", nullptr));
        pushButton_14->setText(QCoreApplication::translate("Entertainmentscreen", "1", nullptr));
        pushButton_15->setText(QCoreApplication::translate("Entertainmentscreen", "2", nullptr));
        pushButton_16->setText(QCoreApplication::translate("Entertainmentscreen", "3", nullptr));
        pushButton_17->setText(QCoreApplication::translate("Entertainmentscreen", "=", nullptr));
        pushButton_20->setText(QCoreApplication::translate("Entertainmentscreen", ".", nullptr));
        pushButton_18->setText(QCoreApplication::translate("Entertainmentscreen", "0", nullptr));
        carPictureButton->setText(QString());
        checkBox->setText(QCoreApplication::translate("Entertainmentscreen", "Tire problems", nullptr));
        backTierIssue->setText(QCoreApplication::translate("Entertainmentscreen", "There's issues with this tier Please go to the Maintenance center to be safe", nullptr));
        videoconmp4->setText(QString());
        homeButtonmp4->setText(QString());
        videoconmp4_2->setText(QString());
        homeButtonmp4_2->setText(QString());
        pushButton_19->setText(QCoreApplication::translate("Entertainmentscreen", "PushButton", nullptr));
        menuentertainmentscreen->setTitle(QCoreApplication::translate("Entertainmentscreen", "NeuroDrive", nullptr));
        menuOpen->setTitle(QCoreApplication::translate("Entertainmentscreen", "Open", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Entertainmentscreen: public Ui_Entertainmentscreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTERTAINMENTSCREEN_H
