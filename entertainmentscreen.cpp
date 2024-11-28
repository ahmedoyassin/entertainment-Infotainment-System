#include "entertainmentscreen.hpp"

#include "systeminterface.hpp"
#include "targets.hpp"


// Constants for command status
constexpr int commandSuccess = 0;
/* General Variables */
int currentIndex;
/* Multimedia Variables */
int flashStatus = flashNotDetected;
int darkThemeFlag = darkMode;
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
    Entertainmentscreen::setStyleSheet("background:url(:/home_page/media/1024x600-black-solid-color-background.jpg)");
    ui->darkLightMode->setIcon(QIcon(":/home_page/media/darkThemeOn_icon.png"));
    ui->darkLightMode->setIconSize(QSize(50,20));

    /***************************************************************************/
    /************************* Start Pages Buttons ****************************/
    /*************************************************************************/

    connect(ui->darkLightMode,SIGNAL(clicked()),SLOT(toggleDarkTheme()));
    connect(ui->startButton,SIGNAL(clicked()),SLOT(navigateToHome()));

    ui->startButton->setIcon(QIcon(":/home_page/media/startButton.png"));
    ui->startButton->setIconSize(QSize(250,250));
    ui->startButton->setAutoFillBackground(false);

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



    /***************************************************************************/
    /************************* Music Pages Buttons ****************************/
    /*************************************************************************/

    audioOutput->setDevice(audioDevice); // Set the device
    audioOutput->setVolume(static_cast<float> (defaultVolume)/100.00f);
    musicPlayer->setAudioOutput(audioOutput);

    ui->musicSlider->setMaximum(100);
    ui->SongList->clear();
    ui->SongList->addItems(musicplaylistName);
    ui->pausecontinueButton->setIcon(QIcon(":/mp3/media/play_icon.svg"));
    ui->pausecontinueButton->setIconSize(QSize(90,40));
    ui->forwardButton->setIcon(QIcon(":/mp3/media/forward_icon.svg"));
    ui->forwardButton->setIconSize(QSize(90,40));
    ui->backwardButton->setIcon(QIcon(":/mp3/media/backward_icon.svg"));
    ui->backwardButton->setIconSize(QSize(90,40));
    ui->shuffleButton->setIcon(QIcon(":/mp3/media/shuffle_icon.png"));
    ui->shuffleButton->setIconSize(QSize(90,40));
    ui->musicVolume->setIcon(QIcon(":/mp3/media/volume_up-24px.svg"));
    ui->musicVolume->setIconSize(QSize(90,40));
    ui->volumeSlider->setSliderPosition(defaultVolume);
    ui->musicIconmp3->setIcon(QIcon(":/home_page/media/music_icon.png"));
    ui->musicIconmp3->setIconSize(QSize(90,40));
    ui->homeButtonmp3->setIcon(QIcon(":/home_page/media/home_icon.png"));
    ui->homeButtonmp3->setIconSize(QSize(100,50));
    ui->SongList->setResizeMode(QListView::Fixed);
    ui->SongList->setSpacing(musicplaylistName.size());
    ui->SongList->setFlow(QListView::TopToBottom);

    connect(ui->shuffleButton, SIGNAL(clicked()), SLOT(handleShuffleButtonPress()));
    connect(ui->volumeSlider, SIGNAL(actionTriggered(int)), SLOT(handleVolumeSlider()));
    connect(ui->SongList, SIGNAL(itemDoubleClicked(QListWidgetItem*)), SLOT(handleSongListSelection(QListWidgetItem*)));
    connect(ui->forwardButton, SIGNAL(clicked()), SLOT(handleForwardButtonPress()));
    connect(ui->backwardButton, SIGNAL(clicked()), SLOT(handleBackwardButtonPress()));
    connect(ui->homeButtonmp3, SIGNAL(clicked()), SLOT(navigateToHome()));
    connect(musicPlayer,SIGNAL(positionChanged(qint64)), SLOT(refreshPosition()));
    connect(ui->musicSlider, SIGNAL(sliderReleased()),SLOT(refreshDuration()));
    connect(musicPlayer, SIGNAL(audioOutputChanged()),SLOT(handleForwardButtonPress()));
    connect(ui->pausecontinueButton, SIGNAL(clicked()), SLOT(handlePlayButtonPress()));

    /***************************************************************************/
    /************************* Video Pages Buttons ****************************/
    /*************************************************************************/
    videoOutput->setDevice(audioDevice); // Set the device
    videoOutput->setVolume(static_cast<float> (defaultVolume)/100.00f);
    videoPlayer->setAudioOutput(videoOutput);
    videoPlayer->setVideoOutput(videoGraphicsItem);
    videoScene->addItem(videoGraphicsItem);
    videoGraphicsItem->setSize(QSize(1000,475));
    ui->videoList->setResizeMode(QListView::Fixed);
    ui->videoList->setSpacing(videoPlaylistName.size());
    ui->videoList->setFlow(QListView::TopToBottom);
    ui->volumeVideoSlider->setSliderPosition(defaultVolume);
    ui->playVideoButton->setIcon(QIcon(":/mp3/media/pause_icon.svg"));
    ui->playVideoButton->setIconSize(QSize(90,40));
    ui->videoForwardButton->setIcon(QIcon(":/mp3/media/forward_icon.svg"));
    ui->videoForwardButton->setIconSize(QSize(90,40));
    ui->videoBackwardButton->setIcon(QIcon(":/mp3/media/backward_icon.svg"));
    ui->videoBackwardButton->setIconSize(QSize(90,40));
    ui->videoList->clear();
    ui->videoList->addItems(videoPlaylistName);
    ui->goBackScreen->setIcon(QIcon(":/mp4/media/goBack.svg"));
    ui->goBackScreen->setIconSize(QSize(90,40));
    ui->homeButtonmp4_2->setIcon(QIcon(":/home_page/media/home_icon.png"));
    ui->homeButtonmp4_2->setIconSize(QSize(90,40));
    ui->videoVolume->setIcon(QIcon(":/mp3/media/volume_up-24px.svg"));
    ui->videoVolume->setIconSize(QSize(90,40));
    ui->videoconmp4->setIcon(QIcon(":/home_page/media/video_icon.png"));
    ui->videoconmp4->setIconSize(QSize(80,40));
    ui->homeButtonmp4->setIcon(QIcon(":/home_page/media/home_icon.png"));
    ui->homeButtonmp4->setIconSize(QSize(100,50));
    ui->videoView->setScene(videoScene);


    connect(ui->volumeVideoSlider, SIGNAL(actionTriggered(int)), SLOT(handleVideoVolume()));
    connect(ui->videoList, SIGNAL(itemDoubleClicked(QListWidgetItem*)), SLOT(handleVideoListSelection(QListWidgetItem*)));
    connect(ui->videoForwardButton, SIGNAL(clicked(bool)), SLOT(handleVideoForwardPress()));
    connect(ui->videoBackwardButton, SIGNAL(clicked(bool)), SLOT(handleVideoBackwardPress()));
    connect(ui->goBackScreen, SIGNAL(clicked(bool)), SLOT(goBackPreVideoScreen()));
    connect(ui->playVideoButton, SIGNAL(clicked()), SLOT(handleVideoPlayPress()));
    connect(videoPlayer,SIGNAL(positionChanged(qint64)), SLOT(refreshVideoPosition()));
    connect(ui->videoSlider, SIGNAL(sliderReleased()),SLOT(refreshVideoDuration()));
    connect(ui->homeButtonmp4, SIGNAL(clicked()), SLOT(navigateToHome()));
    connect(ui->homeButtonmp4_2, SIGNAL(clicked()), SLOT(navigateToHome()));

    /***************************************************************************/
    /*********************** Diagnostics Pages Buttons ************************/
    /*************************************************************************/
    ui->carDiagnosticsButton->setIcon(QIcon(":/home_page/media/carDiagnostics.png"));
    ui->carDiagnosticsButton->setIconSize(QSize(100,100));
    connect(ui->carDiagnosticsButton, SIGNAL(clicked(bool)), SLOT(showCarScreen()));
    ui->backTierIssue->hide();
    connect(ui->checkBox, SIGNAL(clicked(bool)), SLOT(showTireDiagnostics()));
    connect(ui->lockChecker, SIGNAL(clicked(bool)), SLOT(lockCar()));
    connect(ui->homeButtonDiagnostics, SIGNAL(clicked(bool)), SLOT(navigateToHome()));
    ui->label_3->setStyleSheet("background-image: url(:/carDiagnostics/media/padlock-unlock.png)");

    /***************************************************************************/
    /************************* Settings Pages Buttons ****************************/
    /*************************************************************************/
    connect(ui->settingsButton, SIGNAL(clicked(bool)), SLOT(handleSettingsButtonPress()));
    connect(ui->darkLightMode_2,SIGNAL(clicked(bool)),SLOT(toggleDarkTheme()));
    connect(ui->homeButtonSettings, SIGNAL(clicked(bool)), SLOT(navigateToHome()));
    /***********************************************************************/
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
    ui->dateText_2->setText(date);
    ui->dateText->setAlignment(Qt::AlignRight);
    ui->dateText_2->setAlignment(Qt::AlignRight);
    time = currentTime.toString("hh:mm AP");
    ui->timeText->setText(time);
    ui->timeText_2->setText(time);
    ui->timeText->setAlignment(Qt::AlignRight);
    ui->timeText_2->setAlignment(Qt::AlignRight);

}
void Entertainmentscreen:: startPage(){    ui->entertainmentScreenSwitch->setCurrentIndex(startPageIndex);  currentIndex = startPageIndex;}
/* Mutual home button in every page (not avaiable in startPage) */
void Entertainmentscreen:: navigateToHome(){    ui->entertainmentScreenSwitch->setCurrentIndex(homePageIndex);  currentIndex = homePageIndex;}

/******************************************************************************************************************************/
/*************************************************    MultiMedia     *********************************************************/
/****************************************************************************************************************************/


void Entertainmentscreen:: refreshFlashStatus(){

}

void Entertainmentscreen:: toggleDarkTheme(){
    if(darkThemeFlag == darkMode){
        darkThemeFlag = lightMode;
        Entertainmentscreen::setStyleSheet("background:url(:/mainBG/media/colorfulBackground.jpeg)");
        ui->darkLightMode->setIcon(QIcon(":/home_page/media/darkThemeOff_icon.png"));
        ui->darkLightMode_2->setIcon(QIcon(":/home_page/media/darkThemeOff_icon.png"));

    }
    else{
        darkThemeFlag = darkMode;
        Entertainmentscreen::setStyleSheet("background:url(:/home_page/media/1024x600-black-solid-color-background.jpg)");
        ui->darkLightMode->setIcon(QIcon(":/home_page/media/darkThemeOn_icon.png"));
        ui->darkLightMode_2->setIcon(QIcon(":/home_page/media/darkThemeOn_icon.png"));
    }
}

// void Entertainmentscreen::on_actionOpen_File_Here_triggered()
// {
//     QString FileName = QFileDialog::getOpenFileName(this,tr("Select Audio File"),"",tr("MP3 Files (*.mp3)"));
//     musicplaylist.push_back(static_cast<QString>(FileName));

//     QFileInfo fileinfo(FileName);
//     ui->label->setText(fileinfo.fileName());
// }

