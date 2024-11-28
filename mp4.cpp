#include "entertainmentscreen.hpp"

int playingVideoFlag = 0;
int chosenVideo = 0;
extern int currentIndex;

/*****************************************************************************************************************************/
/*************************************************    MP4    ****************************************************************/
/***************************************************************************************************************************/

void Entertainmentscreen:: handleVideoButtonPress(){
    ui->entertainmentScreenSwitch->setCurrentIndex(preVideoPageIndex);
    currentIndex = preVideoPageIndex;
}
void Entertainmentscreen:: handleVideoListSelection(QListWidgetItem* item){
    chosenVideo = ui->videoList->row(item);
    if(chosenVideo < videoPlaylistName.size() && chosenVideo >= 0){
        videoPlayer->setSource(QUrl(videoPlaylist.at(chosenVideo)));
        goVideoScreen();
        startVideo();
    }
    refreshPosition();
    ui->pausecontinueButton->setIcon(QIcon(":/mp3/media/pause_icon.svg"));
}
void Entertainmentscreen:: handleVideoBackwardPress(){
    chosenVideo--;
    if(chosenVideo >= 0){
        videoPlayer->setSource(QUrl(videoPlaylist.at(chosenVideo)));
    }
    else {
        chosenVideo = 0;
        videoPlayer->setSource(QUrl(videoPlaylist.at(chosenVideo)));
    }
    if(playingVideoFlag == 1) videoPlayer->play();;
    ui->videoList->setCurrentRow(chosenVideo);
    refreshPosition();
}
void Entertainmentscreen:: handleVideoForwardPress(){
    ++chosenVideo;
    if(chosenVideo < videoPlaylistName.size()){
        videoPlayer->setSource(QUrl(videoPlaylist.at(chosenVideo)));
    }
    else {
        chosenVideo = videoPlaylistName.size()-1;
        videoPlayer->setSource(QUrl(videoPlaylist.at(chosenVideo)));
    }
    if(playingVideoFlag == 1) videoPlayer->play();;
    ui->videoList->setCurrentRow(chosenVideo);
    refreshPosition();
}
void Entertainmentscreen:: handleVideoPlayPress(){
    if(playingVideoFlag ==0){
        startVideo();
        ui->playVideoButton->setIcon(QIcon(":/mp3/media/pause_icon.svg"));
    }
    else{
        playingVideoFlag = 0;
        ui->playVideoButton->setIcon(QIcon(":/mp3/media/play_icon.svg"));
        //musicPlayer->setPosition(1000*60);
        videoPlayer->pause();
    }
}

void Entertainmentscreen:: handleVideoVolume(){
    static int currentVolume = defaultVolume;
    currentVolume = ui->volumeVideoSlider->sliderPosition();
    videoOutput->setVolume(static_cast<float> (currentVolume)/100.00f);
    if(currentVolume > 1)
        ui->videoVolume->setIcon(QIcon(":/mp3/media/volume_up-24px.svg"));
    else
        ui->videoVolume->setIcon(QIcon(":/mp3/media/volume_off-24px.svg"));
}

void Entertainmentscreen:: startVideo(){
    videoPlayer->play();
    playingVideoFlag =1;
}
void Entertainmentscreen:: haltVideo(){

}

void Entertainmentscreen:: goVideoScreen(){
    ui->entertainmentScreenSwitch->setCurrentIndex(videoPageIndex);
    currentIndex = videoPageIndex;
}

void Entertainmentscreen:: goBackPreVideoScreen(){
    ui->entertainmentScreenSwitch->setCurrentIndex(preVideoPageIndex);
    currentIndex = preVideoPageIndex;
    videoPlayer->stop();
}

void Entertainmentscreen:: refreshVideoDuration(){
    // static int durationCounter = 0;
    // if(durationCounter>1000)
    videoPlayer->setPosition(ui->videoSlider->sliderPosition()*1000);
    //durationCounter++;
}
void Entertainmentscreen:: refreshVideoPosition(){
    qint64 Mduration = videoPlayer->duration()/1000;
    ui->videoSlider->setMaximum(static_cast<float>(Mduration));
    ui->videoSlider->setSliderPosition(static_cast<float>(videoPlayer->position())/1000.00);
    QTime currentTimeDuration((videoPlayer->position()/3600000)%60,(videoPlayer->position()/60000)%60, (videoPlayer->position()/1000)%60, (videoPlayer->position())%1000);
    QTime totalTime((Mduration/3600)%60,(Mduration/60)%60, (Mduration)%60, (Mduration*1000)%1000);
    if(Mduration > 3600)
        format = "hh:mm:ss";
    else
        format = "mm:ss";
    ui->videoDuration0->setText(currentTimeDuration.toString(format));
    ui->videoDuration1->setText(totalTime.toString(format));
}
void Entertainmentscreen:: resetVideo(){
    chosenVideo = 0;
    videoPlayer->setSource(QUrl(videoPlaylist.at(chosenVideo)));
    refreshVideoPosition();
    ui->videoList->setCurrentRow(chosenVideo);
    if(playingVideoFlag == 1) videoPlayer->play();;
}
