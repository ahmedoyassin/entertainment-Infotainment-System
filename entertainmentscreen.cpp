#include "entertainmentscreen.hpp"
#include "ui_entertainmentscreen.h"

#include "systeminterface.hpp"
#include "targets.hpp"


// Constants for command status
constexpr int commandSuccess = 0;
/* General Variables */
int currentVolume = defaultVolume;

/* Multimedia Variables */
int volumeStep = volume_step;
int flashStatus = flashNotDetected;

std::string usbName, usbPath;

/* Music Variables */
std::string musicFileExtension = ".mp3";
int isMusicPlaying = 0;

/* Video Variables */
std::string videoFileExtension = ".mp4";
int isVideoPlaying = 0;
long long videoSeekStep = 10000; // Seek step in milliseconds

/* Bluetooth Variables */
int bluetoothConnectionStatus = bluetoothDisconnected;

Entertainmentscreen::Entertainmentscreen(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Entertainmentscreen)
{
    ui->setupUi(this);

    /* Time and date setup */
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(refreshTime()));
    timer->start();
    startPage();

    /*** Home Pages Buttons ***/

    connect(ui->homeButtonmp3, SIGNAL(clicked()), SLOT(navigateToHome()));
    connect(ui->homeButtonmp4, SIGNAL(clicked()), SLOT(navigateToHome()));

   /************************************************************************/

    connect(ui->darkLightMode,SIGNAL(clicked()),SLOT(toggleDarkTheme()));
    connect(ui->startButton,SIGNAL(clicked()),SLOT(navigateToHome()));
    connect(ui->settingsButton,SIGNAL(clicked()),SLOT(handleSettingsButtonPress()));
    connect(ui->mp3Button, SIGNAL(clicked()), SLOT(handleMusicButtonPress()));
    connect(ui->mp4Button, SIGNAL(clicked()), SLOT(handleVideoButtonPress()));

}

Entertainmentscreen::~Entertainmentscreen()
{
    delete ui;
}

/******************************************************************************************************************************/
/*************************************************    Generic     ************************************************************/
/****************************************************************************************************************************/

/* Time and date updating method */
void Entertainmentscreen:: refreshTime(){
    currentDate = QDate::currentDate();
    date = currentDate.toString();
    currentTime = QTime::currentTime();
    ui->dateText->setText(date);
    ui->dateText->setAlignment(Qt::AlignRight);
    time = currentTime.toString("hh:mm AP");
    ui->timeText->setText(time);
    ui->timeText->setAlignment(Qt::AlignRight);
    //ui->setTimeDateButton->setText(time + ", " + date);
}
void Entertainmentscreen:: startPage(){
    ui->entertainmentScreenSwitch->setCurrentIndex(startPageIndex);
    Entertainmentscreen::setStyleSheet("background:url(:/mainBG/media/darkmodebackground.jpeg)");
    ui->darkLightMode->setIcon(QIcon(":/home_page/media/darkThemeOn_icon.png"));
    ui->darkLightMode->setIconSize(QSize(50,20));
    ui->startButton->setIcon(QIcon(":/home_page/media/startButton.png"));
    ui->startButton->setIconSize(QSize(200,200));
}
/* Mutual home button in every page (not avaiable in startPage) */
void Entertainmentscreen:: navigateToHome(){
    ui->entertainmentScreenSwitch->setCurrentIndex(homePageIndex);
    // ui->homeButton->setIcon(QIcon(":/home_page/media/home_icon.png"));
    // ui->homeButton->setIconSize(QSize(50,50));
    ui->mp3Button->setIcon(QIcon(":/home_page/media/music_icon.png"));
    ui->mp3Button->setIconSize(QSize(100,100));
    ui->mp4Button->setIcon(QIcon(":/home_page/media/video_icon.png"));
    ui->mp4Button->setIconSize(QSize(100,100));
    ui->bluetoothButton->setIcon(QIcon(":/home_page/media/bluetooth_icon.png"));
    ui->bluetoothButton->setIconSize(QSize(100,100));
    ui->settingsButton->setIcon(QIcon(":/home_page/media/settings_icon.png"));
    ui->settingsButton->setIconSize(QSize(100,100));
}

/******************************************************************************************************************************/
/*************************************************    MultiMedia     *********************************************************/
/****************************************************************************************************************************/


void Entertainmentscreen:: refreshFlashStatus(){

}

void Entertainmentscreen:: toggleDarkTheme(){
    static int darkThemeFlag = darkMode;
    if(darkThemeFlag == darkMode){
        darkThemeFlag = lightMode;
        Entertainmentscreen::setStyleSheet("background:url(:/mainBG/media/colorfulBackground.jpeg)");
        ui->darkLightMode->setIcon(QIcon(":/home_page/media/darkThemeOff_icon.png"));
    }
    else{
        darkThemeFlag = darkMode;
        Entertainmentscreen::setStyleSheet("background:url(:/mainBG/media/darkmodebackground.jpeg)");
        ui->darkLightMode->setIcon(QIcon(":/home_page/media/darkThemeOn_icon.png"));
    }
}
