#include "Astromotion.hpp"
#include "ui_Astromotion.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Astromotion w;
    w.show();

    return a.exec();
}

Astromotion::Astromotion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Astromotion)
{
    ui->setupUi(this);
}

Astromotion::~Astromotion()
{
    delete ui;
}
