#include "mainwindow.h"
#include "ui_mainwindow.h"
//#define MAX_X 800
//#define MAX_Y 600

void newDay();
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    //Ras4itqvaem rasstojanie ot planetq k solncu v pikseljax
    float mercuryPix, venusPix, earthPix, marsPix;
    int AE = 500; //Astronomicheskaja Edinica v pixeljax
    mercuryPix=AE*0.387;
    venusPix=AE*0.723;
    earthPix=AE*1.0;
    marsPix=AE*1.524;

    //Zadaem Background
    ui->setupUi(this);
    QPixmap bkgnd("C:/Users/opilane/Desktop/GUI_ClassTest/images/galaxy_starfield.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    //Dobavljaem izobrazhenja na GUI
    QPixmap pix1("C:/Users/opilane/Desktop/GUI_ClassTest/images/mercury.png");
    ui->label_pic_1->setPixmap(pix1);
    QPixmap pix2("C:/Users/opilane/Desktop/GUI_ClassTest/images/venus.png");
    ui->label_pic_2->setPixmap(pix2);
    QPixmap pix3("C:/Users/opilane/Desktop/GUI_ClassTest/images/earth.png");
    ui->label_pic_3->setPixmap(pix3);
    QPixmap pix4("C:/Users/opilane/Desktop/GUI_ClassTest/images/mars.png");
    ui->label_pic_4->setPixmap(pix4);
    QPixmap pixSun("C:/Users/opilane/Desktop/GUI_ClassTest/images/sun.png");
    ui->label_pic_Sun->setPixmap(pixSun);

    //Raspologaem planetq praviljno, otnositeljo sonca
    int DefaultSunX= 10; //Na4aljnaja to4ko ots4eta. X Solnca
    int DefaultSunY= 80; //Na4aljnaja to4ko ots4eta. Y Solnca
    int DefaultPlanetWide = 191; //Standartnaja wirina dlja planet
    int DefaultPlanetHide= 171; //Standartnaja vqsota dlja planet
    ui->label_pic_Sun->setGeometry(DefaultSunX, -80, 250, 500);
    ui->label_pic_1->setGeometry(DefaultSunX+mercuryPix,DefaultSunY,DefaultPlanetWide,DefaultPlanetHide);
    ui->label_pic_2->setGeometry(DefaultSunX+venusPix,DefaultSunY,DefaultPlanetWide,DefaultPlanetHide);
    ui->label_pic_3->setGeometry(DefaultSunX+earthPix,DefaultSunY,DefaultPlanetWide,DefaultPlanetHide);
    ui->label_pic_4->setGeometry(DefaultSunX+marsPix,DefaultSunY,DefaultPlanetWide,DefaultPlanetHide);

}

MainWindow::~MainWindow()
{
    delete ui;
}

//Slaider izmenjajushi zna4enie AE ot 200 do 1000
void MainWindow::on_horizontalSlider_valueChanged(int value/* AE */)
{
    //Some Code Here
}

//Funkcija ras4eta mestanaxozhdenija planetq, v zavisimosti ot dnja
void newDay()
{
    //Some Code Here
}
