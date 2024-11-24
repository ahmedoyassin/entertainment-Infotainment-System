#include "entertainmentscreen.hpp"
#include "ui_entertainmentscreen.h"


/*****************************************************************************************************************************/
/*************************************************    MP3    ****************************************************************/
/***************************************************************************************************************************/

void Entertainmentscreen:: handleMusicButtonPress(){
    ui->entertainmentScreenSwitch->setCurrentIndex(musicPageIndex);
    ui->musicIconmp3->setIcon(QIcon(":/home_page/media/music_icon.png"));
    ui->musicIconmp3->setIconSize(QSize(80,40));
    ui->homeButtonmp3->setIcon(QIcon(":/home_page/media/home_icon.png"));
    ui->homeButtonmp3->setIconSize(QSize(100,50));

}
void Entertainmentscreen:: handleSongListSelection(QListWidgetItem* item){

}
void Entertainmentscreen:: onSongUpdate(){

}
void Entertainmentscreen:: startSong(){

}
void Entertainmentscreen:: refreshSongList(){

}
void Entertainmentscreen:: handleVolumeDownPress(){

}
void Entertainmentscreen:: handleVolumeUpPress(){

}
void Entertainmentscreen:: handlePlayButtonPress(){

}
void Entertainmentscreen:: handleForwardButtonPress(){

}
void Entertainmentscreen:: handleBackwardButtonPress(){

}
void Entertainmentscreen:: handleRepeatButtonPress(){

}
void Entertainmentscreen:: handleShuffleButtonPress(){

}
void Entertainmentscreen:: handleStopButtonPress(){

}
void Entertainmentscreen:: togglePlayback(){

}
