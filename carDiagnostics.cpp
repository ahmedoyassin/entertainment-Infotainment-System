#include "entertainmentscreen.hpp"



void Entertainmentscreen:: showCarScreen(){
    ui->entertainmentScreenSwitch->setCurrentIndex(carDiagnosticsPageIndex);

    ui->carPictureButton->setIcon(QIcon(":/carDiagnostics/media/carPicture.jpg"));
    ui->carPictureButton->setIconSize(QSize(1024,6000));
    ui->backTierIssue->setAutoFillBackground(true);
}

void Entertainmentscreen:: showTireDiagnostics(){
    static int boxTireChecked = 0;
    if(boxTireChecked == 0){
        ui->backTierIssue->show();
        boxTireChecked = 1;}
    else{
        ui->backTierIssue->hide();
        boxTireChecked = 0;
    }
}

void Entertainmentscreen:: lockCar(){
    static int lockCarFlag = 0;
    if(lockCarFlag == 0){
        ui->lockerButton->setIcon(QIcon(":/carDiagnostics/media/padlock.png"));
        lockCarFlag = 1;}
    else{
        ui->lockerButton->setIcon(QIcon(":/carDiagnostics/media/padlock-unlock.png"));
        lockCarFlag = 0;
    }

}
