#include "entertainmentscreen.hpp"

extern int currentIndex;

/*****************************************************************************************************************************/
/************************************************    Settings Methods    *****************************************************/
/*****************************************************************************************************************************/

void Entertainmentscreen:: handleSettingsButtonPress(){
    ui->entertainmentScreenSwitch->setCurrentIndex(settingsPageIndex);
    ui->homeButtonSettings->setIcon(QIcon(":/home_page/media/home_icon.png"));
    ui->homeButtonSettings->setIconSize(QSize(100,50));
    ui->darkLightMode_2->setIcon(QIcon(":/home_page/media/darkThemeOn_icon.png"));
    ui->darkLightMode_2->setIconSize(QSize(50,20));
    ui->settingsIcon->setIcon(QIcon(":/home_page/media/settings_icon.png"));
    ui->settingsIcon->setIconSize(QSize(80,40));
    currentIndex = settingsPageIndex;
}

void Entertainmentscreen:: handleSetTimeDatePress(){

}


void Entertainmentscreen:: handleDoneTimeDatePress(){

}

void Entertainmentscreen:: handleCancelTimeDatePress(){

}
