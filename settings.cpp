#include "entertainmentscreen.hpp"

extern int currentIndex;

/*****************************************************************************************************************************/
/************************************************    Settings Methods    *****************************************************/
/*****************************************************************************************************************************/

void Entertainmentscreen:: handleSettingsButtonPress(){
    ui->entertainmentScreenSwitch->setCurrentIndex(settingsPageIndex);
    currentIndex = settingsPageIndex;
}

void Entertainmentscreen:: handleSetTimeDatePress(){

}


void Entertainmentscreen:: handleDoneTimeDatePress(){

}

void Entertainmentscreen:: handleCancelTimeDatePress(){

}
