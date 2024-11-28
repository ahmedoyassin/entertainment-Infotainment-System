#include "entertainmentscreen.hpp"

int lockCarFlag = 0;
extern int currentIndex;

void Entertainmentscreen:: showCarScreen(){
    ui->entertainmentScreenSwitch->setCurrentIndex(carDiagnosticsPageIndex);
    ui->homeButtonDiagnostics->setIcon(QIcon(":/home_page/media/home_icon.png"));
    ui->homeButtonDiagnostics->setIconSize(QSize(80,40));
    ui->carPictureButton->setIcon(QIcon(":/carDiagnostics/media/carPicture.jpg"));
    ui->carPictureButton->setIconSize(QSize(1024,6000));
    ui->backTierIssue->setAutoFillBackground(true);
    ui->label_3->setMinimumSize(QSize(16,16));
    currentIndex = carDiagnosticsPageIndex;
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
    if(lockCarFlag == Locked){
        ui->label_3->setStyleSheet("background-image: url(:/carDiagnostics/media/padlock.png)");
        lockCarFlag = Unlocked;}
    else{
        ui->label_3->setStyleSheet("background-image: url(:/carDiagnostics/media/padlock-unlock.png)");
        lockCarFlag = Locked;
    }

}
