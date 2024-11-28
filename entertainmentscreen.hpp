#ifndef ENTERTAINMENTSCREEN_HPP
#define ENTERTAINMENTSCREEN_HPP

#include <QMainWindow>
#include <QOverload>

/* Time & Date */
#include <QTimer>
#include <QDate>
#include <QTime>

/* Media */
#include <QIcon>

/* MP3 */
#include <QFile>
#include <QTextStream>
#include <QListWidget>
#include <QMediaPlayer>
#include <QAudioOutput>
//#include <QMediaPlaylist>
#include <QDirIterator>
#include <QDir>
#include <QUrl>
#include <QFileDialog>
#include <QMediaDevices>
#include <QAudioDevice>

/* MP4 */
#include <QRectF>
#include <QGraphicsScene>
#include <QGraphicsVideoItem>

#include <unistd.h>
#include <bits/stdc++.h>

#include <iostream>
#include <typeinfo>
#include <QDebug>


#include "ui_entertainmentscreen.h"

enum{
    startPageIndex =0,
    homePageIndex,
    musicPageIndex,
    calculatorPageIndex,
    carDiagnosticsPageIndex,
    preVideoPageIndex,
    videoPageIndex,
    settingsPageIndex,
    bluetoothPageIndex
}page_indices;

enum{
    flashNotDetected =0,
    flashDetected
}flash_status;

enum{
    minVolume = 0,
    volume_step = 10,
    defaultVolume = 25,
    maxVolume = 100
}volume_limits;

enum {
    bluetoothConnected = 1,
    bluetoothDisconnected = 2
}Bluetooth_status;

enum{
    darkMode =0,
    lightMode
}theme_modes;

enum{
    Locked = 0,
    Unlocked
}carLockingSystem;

QT_BEGIN_NAMESPACE
namespace Ui {
class Entertainmentscreen;
}
QT_END_NAMESPACE

class Entertainmentscreen : public QMainWindow
{
    Q_OBJECT

public:
    Entertainmentscreen(QWidget *parent = nullptr);
    ~Entertainmentscreen();

    /**
    Timer needs.
    **/

    QTimer *timer;
    QTimer *flashDetectionTimer;
    QTimer *bluetoothDetectionTimer;
    QDate currentDate;
    QString format;
    QString date;
    QTime currentTime;
    QString time;
    QString FileName;
    //QMediaPlaylist *playList = new QMediaPlaylist;
    QMediaPlayer *musicPlayer = new QMediaPlayer;
    QAudioOutput *audioOutput = new QAudioOutput();
    QAudioDevice audioDevice = QMediaDevices::defaultAudioOutput(); // Get the default device

    QMediaPlayer *videoPlayer = new QMediaPlayer;
    QAudioOutput *videoOutput = new QAudioOutput();
    QGraphicsScene *videoScene = new QGraphicsScene;
    QGraphicsVideoItem *videoGraphicsItem = new QGraphicsVideoItem;

    std::vector<QString> musicplaylist = {"/media/yasso/yasso2/Embedded Systems/grad project/qt/InfotainmentQt-draft2/media/mp3Songs/HabibyLeeh.mp3"
                                          , "/media/yasso/yasso2/Embedded Systems/grad project/qt/InfotainmentQt-draft2/media/mp3Songs/MATEGYA3ADY3LEKY.mp3"
                                          , "/media/yasso/yasso2/Embedded Systems/grad project/qt/InfotainmentQt-draft2/media/mp3Songs/LeehBENKHABYWMSHBEN2OL.mp3"
                                          };
    QStringList musicplaylistName = {"TUL8TE - Habiby Leeh", "TUL8TE - MATEGY A3ADY 3LEKY", "TUL8TE - Leeh BENKHABY W MSH BEN2OL"};
    std::vector<QString> videoPlaylist = {"/media/yasso/yasso2/Embedded Systems/grad project/qt/InfotainmentQt-draft2/media/mp4Video/E01.mp4"
                                          , "/media/yasso/yasso2/Embedded Systems/grad project/qt/InfotainmentQt-draft2/media/mp4Video/E02.mp4"
                                          , "/media/yasso/yasso2/Embedded Systems/grad project/qt/InfotainmentQt-draft2/media/mp4Video/E03.mp4"
                                          };
    QStringList videoPlaylistName = {"E01", "E02", "E03"};
private slots:
    /******************************************************************************************************************************/
    /*************************************************    Generic     ************************************************************/
    /****************************************************************************************************************************/
    void refreshTime();
    void startPage();
    void navigateToHome();

    /******************************************************************************************************************************/
    /*************************************************    MultiMedia     *********************************************************/
    /****************************************************************************************************************************/
    //QStringList parsePlaylist(const QString &filePath);
    void refreshFlashStatus();

    /*****************************************************************************************************************************/
    /*************************************************    MP3    ****************************************************************/
    /***************************************************************************************************************************/

    void handleMusicButtonPress();
    void handleSongListSelection(QListWidgetItem* item);
    void onSongUpdate();
    void startSong();
    void haltSong();
    void handleVolumeSlider();
    void handlePlayButtonPress();
    void handleForwardButtonPress();
    void handleBackwardButtonPress();
    void handleRepeatButtonPress();
    void handleShuffleButtonPress();
    void togglePlayback();
    void refreshDuration();
    void refreshPosition();
    void resetSong();
    /*****************************************************************************************************************************/
    /*************************************************    MP4    ****************************************************************/
    /***************************************************************************************************************************/

    void handleVideoButtonPress();
    void handleVideoListSelection(QListWidgetItem* item);
    void handleVideoBackwardPress();
    void handleVideoForwardPress();
    void handleVideoPlayPress();
    void handleVideoVolume();
    void startVideo();
    void haltVideo();
    void goVideoScreen();
    void goBackPreVideoScreen();
    void refreshVideoDuration();
    void refreshVideoPosition();
    void resetVideo();
    /*****************************************************************************************************************************/
    /*************************************************    Bluetooth    **********************************************************/
    /***************************************************************************************************************************/

    void activateBluetooth();
    void refreshBluetoothDevices();
    void handleBluetoothButtonPress();

    /*****************************************************************************************************************************/
    /************************************************    Settings Methods    *****************************************************/
    /*****************************************************************************************************************************/

    void handleSettingsButtonPress();
    void toggleDarkTheme();
    void handleSetTimeDatePress();
    void handleDoneTimeDatePress();
    void handleCancelTimeDatePress();

    /*****************************************************************************************************************************/
    /************************************************    Diagnostics Methods    *****************************************************/
    /*****************************************************************************************************************************/
    void showCarScreen();
    void showTireDiagnostics();
    void lockCar();
    /*****************************************************************************************************************************/
    /****************************************************************************************************************************/
    /*****************************************************************************************************************************/


    //void on_actionOpen_File_Here_triggered();

private:
    Ui::Entertainmentscreen *ui;
};

/* System Functions */
int connectUsb(void);
int disconnectUsb(void);
void initializeSystem(void);
std::string getUsbDetails(const std::string& deviceList);


#endif // ENTERTAINMENTSCREEN_HPP
