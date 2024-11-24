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
//#include <QMediaPlaylist>
#include <QDirIterator>
#include <QDir>
#include <QUrl>

/* MP4 */
#include <QRectF>
#include <QGraphicsScene>
#include <QGraphicsVideoItem>

#include <unistd.h>
#include <bits/stdc++.h>

#include <iostream>
#include <typeinfo>
#include <QDebug>

enum{
    startPageIndex =0,
    homePageIndex,
    musicPageIndex,
    videoPageIndex,
    bluetoothPageIndex,
    settingsPageIndex,
    videoDetailsPageIndex
}page_indices;

enum{
    flashNotDetected =0,
    flashDetected
}flash_status;

enum{
    minVolume = 0,
    volume_step = 10,
    defaultVolume = 50,
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
    QString date;
    QTime currentTime;
    QString time;


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

    void refreshFlashStatus();

    /*****************************************************************************************************************************/
    /*************************************************    MP3    ****************************************************************/
    /***************************************************************************************************************************/

    void handleMusicButtonPress();
    void handleSongListSelection(QListWidgetItem* item);
    void onSongUpdate();
    void startSong();
    void refreshSongList();
    void handleVolumeDownPress();
    void handleVolumeUpPress();
    void handlePlayButtonPress();
    void handleForwardButtonPress();
    void handleBackwardButtonPress();
    void handleRepeatButtonPress();
    void handleShuffleButtonPress();
    void handleStopButtonPress();
    void togglePlayback();

    /*****************************************************************************************************************************/
    /*************************************************    MP4    ****************************************************************/
    /***************************************************************************************************************************/

    void handleVideoButtonPress();
    void refreshVideoList();
    void handleVideoListNavigation();
    void handleVideoListSelection(QListWidgetItem* item);
    void handleVideoBackwardPress();
    void handleVideoForwardPress();
    void handleVideoPlayPress();
    void handleVideoStopPress();
    void handleVideoVolumeDownPress();
    void handleVideoVolumeUpPress();
    void startVideo();
    void haltVideo();

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
    /****************************************************************************************************************************/
    /*****************************************************************************************************************************/
private:
    Ui::Entertainmentscreen *ui;
};

/* System Functions */
int connectUsb(void);
int disconnectUsb(void);
void initializeSystem(void);
std::string getUsbDetails(const std::string& deviceList);


#endif // ENTERTAINMENTSCREEN_HPP
