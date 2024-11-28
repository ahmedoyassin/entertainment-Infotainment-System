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
#include <QtWidgets/QGraphicsView>
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
    QLabel *label;
    QLabel *timeDuration0;
    QLabel *timeDuration1;
    QListWidget *SongList;
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
    QCheckBox *lockChecker;
    QPushButton *homeButtonDiagnostics;
    QLabel *label_3;
    QWidget *preVideoPage;
    QPushButton *videoconmp4;
    QPushButton *homeButtonmp4;
    QListWidget *videoList;
    QWidget *videoPage;
    QPushButton *videoconmp4_2;
    QPushButton *homeButtonmp4_2;
    QPushButton *goBackScreen;
    QPushButton *videoVolume;
    QLabel *videoDuration0;
    QSlider *volumeVideoSlider;
    QLabel *videoDuration1;
    QSlider *videoSlider;
    QPushButton *videoForwardButton;
    QPushButton *playVideoButton;
    QPushButton *videoBackwardButton;
    QGraphicsView *graphicsView;
    QWidget *settingsPage;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *dateText_2;
    QPushButton *darkLightMode_2;
    QPushButton *homeButtonSettings;
    QPushButton *settingsIcon;
    QLabel *timeText_2;
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
        startButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: rgb(255, 255, 255);\n"
"    border: none;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 25);\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    color: rgba(255, 255, 255, 128);\n"
"}\n"
"\n"
"QPushButton:!flat {\n"
"    background-color: rgba(255, 255, 255, 31);\n"
"}\n"
"\n"
"QPushButton:!flat:checked {\n"
"    color: rgb(0, 0, 0);\n"
"    background-color: palette(base);\n"
"}\n"
"\n"
"QPushButton:!flat:disabled {\n"
"    background-color: rgba(255, 255, 255, 13);\n"
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
        musicIconmp3->setGeometry(QRect(20, 40, 80, 40));
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
        label = new QLabel(musicPage);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 120, 101, 17));
        timeDuration0 = new QLabel(musicPage);
        timeDuration0->setObjectName("timeDuration0");
        timeDuration0->setGeometry(QRect(350, 455, 60, 17));
        timeDuration0->setAlignment(Qt::AlignmentFlag::AlignCenter);
        timeDuration1 = new QLabel(musicPage);
        timeDuration1->setObjectName("timeDuration1");
        timeDuration1->setGeometry(QRect(620, 455, 60, 17));
        timeDuration1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        SongList = new QListWidget(musicPage);
        new QListWidgetItem(SongList);
        SongList->setObjectName("SongList");
        SongList->setGeometry(QRect(123, 150, 700, 241));
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
        checkBox->setGeometry(QRect(170, 60, 131, 23));
        backTierIssue = new QLabel(carDiagnosticPage);
        backTierIssue->setObjectName("backTierIssue");
        backTierIssue->setGeometry(QRect(270, 500, 649, 32));
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
        lockChecker = new QCheckBox(carDiagnosticPage);
        lockChecker->setObjectName("lockChecker");
        lockChecker->setGeometry(QRect(20, 60, 141, 23));
        homeButtonDiagnostics = new QPushButton(carDiagnosticPage);
        homeButtonDiagnostics->setObjectName("homeButtonDiagnostics");
        homeButtonDiagnostics->setGeometry(QRect(20, 480, 60, 40));
        label_3 = new QLabel(carDiagnosticPage);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(900, 60, 64, 64));
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
        videoList = new QListWidget(preVideoPage);
        new QListWidgetItem(videoList);
        videoList->setObjectName("videoList");
        videoList->setGeometry(QRect(100, 200, 700, 241));
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
        goBackScreen = new QPushButton(videoPage);
        goBackScreen->setObjectName("goBackScreen");
        goBackScreen->setGeometry(QRect(0, 480, 100, 50));
        goBackScreen->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: rgb(255, 255, 255);\n"
"    border: none;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 25);\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    color: rgba(255, 255, 255, 128);\n"
"}\n"
"\n"
"QPushButton:!flat {\n"
"    background-color: rgba(255, 255, 255, 31);\n"
"}\n"
"\n"
"QPushButton:!flat:checked {\n"
"    color: rgb(0, 0, 0);\n"
"    background-color: palette(base);\n"
"}\n"
"\n"
"QPushButton:!flat:disabled {\n"
"    background-color: rgba(255, 255, 255, 13);\n"
"}"));
        videoVolume = new QPushButton(videoPage);
        videoVolume->setObjectName("videoVolume");
        videoVolume->setGeometry(QRect(728, 430, 40, 40));
        videoVolume->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"outline: none;\n"
"}"));
        videoDuration0 = new QLabel(videoPage);
        videoDuration0->setObjectName("videoDuration0");
        videoDuration0->setGeometry(QRect(358, 440, 60, 17));
        videoDuration0->setAlignment(Qt::AlignmentFlag::AlignCenter);
        volumeVideoSlider = new QSlider(videoPage);
        volumeVideoSlider->setObjectName("volumeVideoSlider");
        volumeVideoSlider->setGeometry(QRect(768, 430, 100, 40));
        volumeVideoSlider->setStyleSheet(QString::fromUtf8("QSlider {\n"
"    from: 1\n"
"    value: 25\n"
"    to: 100\n"
"}"));
        volumeVideoSlider->setOrientation(Qt::Orientation::Horizontal);
        videoDuration1 = new QLabel(videoPage);
        videoDuration1->setObjectName("videoDuration1");
        videoDuration1->setGeometry(QRect(628, 440, 60, 17));
        videoDuration1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        videoSlider = new QSlider(videoPage);
        videoSlider->setObjectName("videoSlider");
        videoSlider->setGeometry(QRect(420, 440, 200, 20));
        videoSlider->setOrientation(Qt::Orientation::Horizontal);
        videoForwardButton = new QPushButton(videoPage);
        videoForwardButton->setObjectName("videoForwardButton");
        videoForwardButton->setGeometry(QRect(540, 385, 40, 40));
        videoForwardButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"outline: none;\n"
"}"));
        playVideoButton = new QPushButton(videoPage);
        playVideoButton->setObjectName("playVideoButton");
        playVideoButton->setGeometry(QRect(500, 385, 41, 40));
        playVideoButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"outline: none;\n"
"}"));
        videoBackwardButton = new QPushButton(videoPage);
        videoBackwardButton->setObjectName("videoBackwardButton");
        videoBackwardButton->setGeometry(QRect(460, 385, 40, 40));
        videoBackwardButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"outline: none;\n"
"}"));
        graphicsView = new QGraphicsView(videoPage);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(0, 0, 1024, 600));
        entertainmentScreenSwitch->addWidget(videoPage);
        graphicsView->raise();
        videoconmp4_2->raise();
        homeButtonmp4_2->raise();
        goBackScreen->raise();
        videoVolume->raise();
        videoDuration0->raise();
        volumeVideoSlider->raise();
        videoDuration1->raise();
        videoSlider->raise();
        videoForwardButton->raise();
        playVideoButton->raise();
        videoBackwardButton->raise();
        settingsPage = new QWidget();
        settingsPage->setObjectName("settingsPage");
        label_4 = new QLabel(settingsPage);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 120, 124, 37));
        QFont font1;
        font1.setPointSize(25);
        label_4->setFont(font1);
        label_5 = new QLabel(settingsPage);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(140, 180, 185, 24));
        QFont font2;
        font2.setPointSize(16);
        label_5->setFont(font2);
        label_6 = new QLabel(settingsPage);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(140, 230, 117, 24));
        label_6->setFont(font2);
        dateText_2 = new QLabel(settingsPage);
        dateText_2->setObjectName("dateText_2");
        dateText_2->setGeometry(QRect(450, 230, 150, 20));
        darkLightMode_2 = new QPushButton(settingsPage);
        darkLightMode_2->setObjectName("darkLightMode_2");
        darkLightMode_2->setGeometry(QRect(500, 180, 60, 25));
        darkLightMode_2->setAutoFillBackground(false);
        darkLightMode_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:none;\n"
"}"));
        homeButtonSettings = new QPushButton(settingsPage);
        homeButtonSettings->setObjectName("homeButtonSettings");
        homeButtonSettings->setGeometry(QRect(462, 480, 100, 50));
        homeButtonSettings->setAutoFillBackground(false);
        homeButtonSettings->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #4caf50;\n"
"color: white;\n"
"border:none;\n"
"outline: none;\n"
"}"));
        settingsIcon = new QPushButton(settingsPage);
        settingsIcon->setObjectName("settingsIcon");
        settingsIcon->setGeometry(QRect(25, 60, 80, 40));
        settingsIcon->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"}"));
        timeText_2 = new QLabel(settingsPage);
        timeText_2->setObjectName("timeText_2");
        timeText_2->setGeometry(QRect(600, 230, 80, 17));
        entertainmentScreenSwitch->addWidget(settingsPage);
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
        label->setText(QCoreApplication::translate("Entertainmentscreen", "Audio Playlist:", nullptr));
        timeDuration0->setText(QCoreApplication::translate("Entertainmentscreen", "00:00:00", nullptr));
        timeDuration1->setText(QCoreApplication::translate("Entertainmentscreen", "00:00:00", nullptr));

        const bool __sortingEnabled = SongList->isSortingEnabled();
        SongList->setSortingEnabled(false);
        SongList->setSortingEnabled(__sortingEnabled);

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
        lockChecker->setText(QCoreApplication::translate("Entertainmentscreen", "Lock/Unlock Car", nullptr));
        homeButtonDiagnostics->setText(QString());
        label_3->setText(QString());
        videoconmp4->setText(QString());
        homeButtonmp4->setText(QString());

        const bool __sortingEnabled1 = videoList->isSortingEnabled();
        videoList->setSortingEnabled(false);
        videoList->setSortingEnabled(__sortingEnabled1);

        videoconmp4_2->setText(QString());
        homeButtonmp4_2->setText(QString());
        goBackScreen->setText(QString());
        videoVolume->setText(QString());
        videoDuration0->setText(QCoreApplication::translate("Entertainmentscreen", "00:00:00", nullptr));
        videoDuration1->setText(QCoreApplication::translate("Entertainmentscreen", "00:00:00", nullptr));
        videoForwardButton->setText(QString());
        playVideoButton->setText(QString());
        videoBackwardButton->setText(QString());
        label_4->setText(QCoreApplication::translate("Entertainmentscreen", "Settings", nullptr));
        label_5->setText(QCoreApplication::translate("Entertainmentscreen", "Enable Dark Theme", nullptr));
        label_6->setText(QCoreApplication::translate("Entertainmentscreen", "Time & Date", nullptr));
        dateText_2->setText(QString());
        darkLightMode_2->setText(QString());
        homeButtonSettings->setText(QString());
        settingsIcon->setText(QString());
        timeText_2->setText(QString());
        menuentertainmentscreen->setTitle(QCoreApplication::translate("Entertainmentscreen", "NeuroDrive", nullptr));
        menuOpen->setTitle(QCoreApplication::translate("Entertainmentscreen", "Open", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Entertainmentscreen: public Ui_Entertainmentscreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTERTAINMENTSCREEN_H
