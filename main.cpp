#include "entertainmentscreen.hpp"

#include <QApplication>

constexpr int windowWidth   =  1024;
constexpr int windowHeight  =  600;

int main(int argc, char *argv[])
{

    QApplication app(argc, argv);
    Entertainmentscreen w;
    w.setFixedSize(windowWidth,windowHeight);
    w.show();

    return app.exec();
}
