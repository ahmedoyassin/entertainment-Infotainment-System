#include "entertainmentscreen.hpp"


int playingSongFlag = 0;
int chosenSong = 0;
QListWidgetItem currentItemSelected;
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
    chosenSong = ui->SongList->row(item);
    if(chosenSong <= musicplaylistName.size() && chosenSong >= 0){
    musicPlayer->setSource(QUrl(musicplaylist.at(chosenSong-1)));
    musicPlayer->play();
    }
    refreshPosition();
    ui->pausecontinueButton->setIcon(QIcon(":/mp3/media/pause_icon.svg"));
}

void Entertainmentscreen:: onSongUpdate(){

}
void Entertainmentscreen:: startSong(){

}
void Entertainmentscreen:: refreshSongList(){

}

void Entertainmentscreen:: handleVolumeSlider(){
    static int currentVolume = defaultVolume;
    currentVolume = ui->volumeSlider->sliderPosition();
    audioOutput->setVolume(static_cast<float> (currentVolume)/100.00f);
    if(currentVolume > 1)
        ui->musicVolume->setIcon(QIcon(":/mp3/media/volume_up-24px.svg"));
    else
        ui->musicVolume->setIcon(QIcon(":/mp3/media/volume_off-24px.svg"));
}
void Entertainmentscreen:: handlePlayButtonPress(){
    if(playingSongFlag ==0){
        musicPlayer->play();
        playingSongFlag = 1;
        ui->pausecontinueButton->setIcon(QIcon(":/mp3/media/pause_icon.svg"));
    }
    else{
        playingSongFlag = 0;
        ui->pausecontinueButton->setIcon(QIcon(":/mp3/media/play_icon.svg"));
        //musicPlayer->setPosition(1000*60);
        musicPlayer->pause();
    }

}
void Entertainmentscreen:: handleForwardButtonPress(){
    chosenSong++;
    if(chosenSong <= musicplaylistName.capacity() && chosenSong >= 0){
        musicPlayer->setSource(QUrl(musicplaylist.at(chosenSong-1)));
        musicPlayer->play();
    }
    else {
        resetSong();
        chosenSong = 1;
        musicPlayer->setSource(QUrl(musicplaylist.at(chosenSong-1)));
        musicPlayer->play();
    }
    refreshPosition();
}
void Entertainmentscreen:: handleBackwardButtonPress(){

}
void Entertainmentscreen:: handleRepeatButtonPress(){

}
void Entertainmentscreen:: handleShuffleButtonPress(){
    static int toggleShuffle = 0;
    if(toggleShuffle == 0){
        toggleShuffle = 1;
        ui->shuffleButton->setIcon(QIcon(":/mp3/media/shufflePressed_icon.png"));
    }
    else{
        toggleShuffle = 0;
        ui->shuffleButton->setIcon(QIcon(":/mp3/media/shuffle_icon.png"));
    }
}
void Entertainmentscreen:: togglePlayback(){

}
void Entertainmentscreen:: refreshDuration(){
    // static int durationCounter = 0;
    // if(durationCounter>1000)
    musicPlayer->setPosition(ui->musicSlider->sliderPosition()*1000);
    //durationCounter++;
}
void Entertainmentscreen:: refreshPosition(){
    qint64 Mduration = musicPlayer->duration()/1000;
    ui->musicSlider->setMaximum(static_cast<float>(Mduration));
    ui->musicSlider->setSliderPosition(static_cast<float>(musicPlayer->position())/1000.00);
    QTime currentTimeDuration((musicPlayer->position()/3600000)%60,(musicPlayer->position()/60000)%60, (musicPlayer->position()/1000)%60, (musicPlayer->position())%1000);
    QTime totalTime((Mduration/3600)%60,(Mduration/60)%60, (Mduration)%60, (Mduration*1000)%1000);
        if(Mduration > 3600)
            format = "hh:mm:ss";
        else
            format = "mm:ss";

    ui->timeDuration1->setText(totalTime.toString(format));
    ui->timeDuration0->setText(currentTimeDuration.toString(format));
}
void Entertainmentscreen:: resetSong(){
    chosenSong = 1;
    ui->musicSlider->setSliderPosition(0);
    musicPlayer->setSource(QUrl(musicplaylist.at(chosenSong-1)));

    handlePlayButtonPress();
}
