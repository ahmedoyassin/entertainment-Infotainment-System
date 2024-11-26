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
