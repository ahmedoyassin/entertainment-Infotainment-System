#include "entertainmentscreen.hpp"

#include "systeminterface.hpp"
#include "targets.hpp"


// Constants for command status
constexpr int commandSuccess = 0;
/* General Variables */
int currentIndex = 0;
/* Multimedia Variables */
int flashStatus = flashNotDetected;

std::string usbName, usbPath;

/* Music Variables */
std::string musicFileExtension = ".mp3";

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
    /****************************************************************************/
    /**************************** Background Setup *****************************/
    /**************************************************************************/
    Entertainmentscreen::setStyleSheet("background:url(:/mainBG/media/darkmodebackground.jpeg)");
    ui->darkLightMode->setIcon(QIcon(":/home_page/media/darkThemeOn_icon.png"));
    ui->darkLightMode->setIconSize(QSize(50,20));

    /***************************************************************************/
    /************************* Start Pages Buttons ****************************/
    /*************************************************************************/

    connect(ui->darkLightMode,SIGNAL(clicked()),SLOT(toggleDarkTheme()));
    connect(ui->startButton,SIGNAL(clicked()),SLOT(navigateToHome()));

    ui->startButton->setIcon(QIcon(":/home_page/media/startButton.png"));
    ui->startButton->setIconSize(QSize(200,200));
    /***************************************************************************/
    /************************* Home Pages Buttons *****************************/
    /*************************************************************************/
    ui->mp3Button->setIcon(QIcon(":/home_page/media/music_icon.png"));
    ui->mp3Button->setIconSize(QSize(100,100));

    ui->mp4Button->setIcon(QIcon(":/home_page/media/video_icon.png"));
    ui->mp4Button->setIconSize(QSize(100,100));
    ui->bluetoothButton->setIcon(QIcon(":/home_page/media/bluetooth_icon.png"));
    ui->bluetoothButton->setIconSize(QSize(100,100));
    ui->settingsButton->setIcon(QIcon(":/home_page/media/settings_icon.png"));
    ui->settingsButton->setIconSize(QSize(100,100));

    connect(ui->settingsButton,SIGNAL(clicked()),SLOT(handleSettingsButtonPress()));
    connect(ui->mp3Button, SIGNAL(clicked()), SLOT(handleMusicButtonPress()));
    connect(ui->mp4Button, SIGNAL(clicked()), SLOT(handleVideoButtonPress()));

    connect(ui->homeButtonmp4, SIGNAL(clicked()), SLOT(navigateToHome()));

   /***************************************************************************/




    /***************************************************************************/
    /************************* Music Pages Buttons ****************************/
    /*************************************************************************/

    audioOutput->setDevice(audioDevice); // Set the device
    musicPlayer->setSource(QUrl::fromLocalFile("/media/yasso/yasso2/Embedded Systems/grad project/qt/InfotainmentQt-draft2/media/HabibyLeeh.mp3"));
    ui->volumeSlider->setSliderPosition(defaultVolume);
    audioOutput->setVolume(static_cast<float> (defaultVolume)/100.00f);
    musicPlayer->setAudioOutput(audioOutput);
    connect(musicPlayer,SIGNAL(positionChanged(qint64)), SLOT(refreshPosition()));
    connect(ui->musicSlider, SIGNAL(sliderReleased()),SLOT(refreshDuration()));
    connect(musicPlayer, SIGNAL(audioOutputChanged()),SLOT(resetSong()));
    ui->musicSlider->setMaximum(100);


    ui->pausecontinueButton->setIcon(QIcon(":/mp3/media/play_icon.svg"));
    ui->pausecontinueButton->setIconSize(QSize(90,40));
    connect(ui->pausecontinueButton, SIGNAL(clicked()), SLOT(handlePlayButtonPress()));
    ui->forwardButton->setIcon(QIcon(":/mp3/media/forward_icon.svg"));
    ui->forwardButton->setIconSize(QSize(90,40));
    connect(ui->forwardButton, SIGNAL(clicked()), SLOT(handleForwardButtonPress()));
    ui->backwardButton->setIcon(QIcon(":/mp3/media/backward_icon.svg"));
    ui->backwardButton->setIconSize(QSize(90,40));
    connect(ui->forwardButton, SIGNAL(clicked()), SLOT(handleBackwardButtonPress()));
    ui->shuffleButton->setIcon(QIcon(":/mp3/media/shuffle_icon.png"));
    ui->shuffleButton->setIconSize(QSize(90,40));
    connect(ui->shuffleButton, SIGNAL(clicked()), SLOT(handleShuffleButtonPress()));
    ui->musicVolume->setIcon(QIcon(":/mp3/media/volume_up-24px.svg"));
    ui->musicVolume->setIconSize(QSize(90,40));
    connect(ui->volumeSlider, SIGNAL(actionTriggered(int)), SLOT(handleVolumeSlider()));
    // QStringList playList = parsePlaylist(playlistFile);
    // musicPlayer->setAudioOutput(audioOutput);
    // QObject::connect(musicPlayer, &QMediaPlayer::mediaStatusChanged, [&](QMediaPlayer::MediaStatus status) {
    //     if (status == QMediaPlayer::EndOfMedia) {
    //         currentIndex = (currentIndex + 1) % playList.size();
    //         musicPlayer->setSource(QUrl::fromLocalFile(playList[currentIndex]));
    //         musicPlayer->play();
    //     }
    // });
    // musicPlayer->
    // musicPlayer->setSource(QUrl(":/mp3/media/MATEEGY_A3ADY_ALEIKY.mp3"));
    // musicPlayer->activeAudioTrack();
    // musicPlayer->play();

    connect(ui->homeButtonmp3, SIGNAL(clicked()), SLOT(navigateToHome()));

    /***************************************************************************/
    /************************* Video Pages Buttons ****************************/
    /*************************************************************************/



    /***************************************************************************/
    /*********************** Diagnostics Pages Buttons ************************/
    /*************************************************************************/
    ui->carDiagnosticsButton->setIcon(QIcon(":/home_page/media/carDiagnostics.png"));
    ui->carDiagnosticsButton->setIconSize(QSize(100,100));
    connect(ui->carDiagnosticsButton, SIGNAL(clicked(bool)), SLOT(showCarScreen()));
    ui->backTierIssue->hide();
    connect(ui->checkBox, SIGNAL(clicked(bool)), SLOT(showTireDiagnostics()));

}

Entertainmentscreen::~Entertainmentscreen(){   delete ui;  }

/******************************************************************************************************************************/
/*************************************************    Generic     ************************************************************/
/****************************************************************************************************************************/


// QStringList parsePlaylist(const QString &filePath) {
//     QStringList playlist;
//     QFile file(filePath);

//     if (file.open(QIODevice::ReadOnly)) {
//         while (!file.atEnd()) {
//             QString line = file.readLine().trimmed();
//             if (!line.startsWith("#") && !line.isEmpty()) {
//                 playlist.append(line);
//             }
//         }
//     }

//     return playlist;
// }

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
}
void Entertainmentscreen:: startPage(){    ui->entertainmentScreenSwitch->setCurrentIndex(startPageIndex);  }
/* Mutual home button in every page (not avaiable in startPage) */
void Entertainmentscreen:: navigateToHome(){    ui->entertainmentScreenSwitch->setCurrentIndex(homePageIndex);  }

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
