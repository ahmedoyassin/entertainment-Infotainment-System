#include "entertainmentscreen.hpp"

extern int playingSongFlag;
int playingVideoFlag = 0;

/*****************************************************************************************************************************/
/*************************************************    MP4    ****************************************************************/
/***************************************************************************************************************************/

void Entertainmentscreen:: handleVideoButtonPress(){
    ui->entertainmentScreenSwitch->setCurrentIndex(videoPageIndex);
    ui->videoconmp4->setIcon(QIcon(":/home_page/media/video_icon.png"));
    ui->videoconmp4->setIconSize(QSize(80,40));
    ui->homeButtonmp4->setIcon(QIcon(":/home_page/media/home_icon.png"));
    ui->homeButtonmp4->setIconSize(QSize(100,50));
}

void Entertainmentscreen:: refreshVideoList(){

}
void Entertainmentscreen:: handleVideoListNavigation(){

}
void Entertainmentscreen:: handleVideoListSelection(QListWidgetItem* item){

}
void Entertainmentscreen:: handleVideoBackwardPress(){

}
void Entertainmentscreen:: handleVideoForwardPress(){

}
void Entertainmentscreen:: handleVideoPlayPress(){

}
void Entertainmentscreen:: handleVideoStopPress(){

}
void Entertainmentscreen:: handleVideoVolumeDownPress(){

}
void Entertainmentscreen:: handleVideoVolumeUpPress(){

}
void Entertainmentscreen:: startVideo(){
    if(playingSongFlag == 1){
        handlePlayButtonPress();
    }
    playingVideoFlag = 1;

}
void Entertainmentscreen:: haltVideo(){

}
