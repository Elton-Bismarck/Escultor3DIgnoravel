#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>
#include <QMouseEvent>
#include "sculptor.hpp"


MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    nx = 10;
    ny = 10;
    nz = 10;
    r = 1;
    g = 1;
    b = 1;
    obj = new class Sculptor(nx,ny,nz);

    connect(ui->ButtonQuit, SIGNAL(clicked(bool)), this, SLOT(sair()));


    connect(ui->Bvoxel, SIGNAL(clicked(bool)), this, SLOT(putvoxel()));

    connect(ui->BNvoxel, SIGNAL(clicked(bool)), this, SLOT(cutvoxel()));

    connect(ui->Bcubo, SIGNAL(clicked(bool)), this, SLOT(putbox()));

    connect(ui->BNcubo, SIGNAL(clicked(bool)), this, SLOT(cutbox()));

    connect(ui->Besfera, SIGNAL(clicked(bool)), this, SLOT(putsphere()));

    connect(ui->BNesfera, SIGNAL(clicked(bool)), this, SLOT(cutsphere()));

    connect(ui->Belipsoide, SIGNAL(clicked(bool)), this, SLOT(putellipse()));

    connect(ui->BNelipsoide, SIGNAL(clicked(bool)), this, SLOT(cutellipse()));


    connect(ui->SliderR, SIGNAL(valueChanged(int)), this, SLOT(RGBR(int)));

    connect(ui->SliderB, SIGNAL(valueChanged(int)), this, SLOT(RGBG(int)));

    connect(ui->SliderG, SIGNAL(valueChanged(int)), this, SLOT(RGBB(int)));

    connect(ui->ButtonCor, SIGNAL(clicked(bool)), this, SLOT(cor()));


    /*connect(ui->SliderX, SIGNAL(valueChanged(int)), this, SLOT());

    connect(ui->SliderY, SIGNAL(valueChanged(int)), this, SLOT());

    connect(ui->SliderZ, SIGNAL(valueChanged(int)), this, SLOT());

    connect(ui->SliderR2, SIGNAL(valueChanged(int)), this, SLOT());*/

    //connect(ui->SliderPZ, SIGNAL(valueChanged(int)), this, SLOT(mudaZ()));

    connect(ui->b1, SIGNAL(clicked(bool)),this, SLOT(m1()));
    connect(ui->b2, SIGNAL(clicked(bool)),this, SLOT(m2()));
    connect(ui->b3, SIGNAL(clicked(bool)),this, SLOT(m3()));
    connect(ui->b4, SIGNAL(clicked(bool)),this, SLOT(m4()));
    connect(ui->b5, SIGNAL(clicked(bool)),this, SLOT(m5()));
    connect(ui->b6, SIGNAL(clicked(bool)),this, SLOT(m6()));
    connect(ui->b7, SIGNAL(clicked(bool)),this, SLOT(m7()));
    connect(ui->b8, SIGNAL(clicked(bool)),this, SLOT(m8()));
    connect(ui->b9, SIGNAL(clicked(bool)),this, SLOT(m9()));
    connect(ui->b10, SIGNAL(clicked(bool)),this, SLOT(m10()));
    connect(ui->b11, SIGNAL(clicked(bool)),this, SLOT(m11()));
    connect(ui->b12, SIGNAL(clicked(bool)),this, SLOT(m12()));
    connect(ui->b13, SIGNAL(clicked(bool)),this, SLOT(m13()));
    connect(ui->b14, SIGNAL(clicked(bool)),this, SLOT(m14()));
    connect(ui->b15, SIGNAL(clicked(bool)),this, SLOT(m15()));
    connect(ui->b16, SIGNAL(clicked(bool)),this, SLOT(m16()));
    connect(ui->b17, SIGNAL(clicked(bool)),this, SLOT(m17()));
    connect(ui->b18, SIGNAL(clicked(bool)),this, SLOT(m18()));
    connect(ui->b19, SIGNAL(clicked(bool)),this, SLOT(m19()));
    connect(ui->b20, SIGNAL(clicked(bool)),this, SLOT(m20()));
    connect(ui->b21, SIGNAL(clicked(bool)),this, SLOT(m21()));
    connect(ui->b22, SIGNAL(clicked(bool)),this, SLOT(m22()));
    connect(ui->b23, SIGNAL(clicked(bool)),this, SLOT(m23()));
    connect(ui->b24, SIGNAL(clicked(bool)),this, SLOT(m24()));
    connect(ui->b25, SIGNAL(clicked(bool)),this, SLOT(m25()));
    connect(ui->b26, SIGNAL(clicked(bool)),this, SLOT(m26()));
    connect(ui->b27, SIGNAL(clicked(bool)),this, SLOT(m27()));
    connect(ui->b28, SIGNAL(clicked(bool)),this, SLOT(m28()));
    connect(ui->b29, SIGNAL(clicked(bool)),this, SLOT(m29()));
    connect(ui->b30, SIGNAL(clicked(bool)),this, SLOT(m30()));
    connect(ui->b31, SIGNAL(clicked(bool)),this, SLOT(m31()));
    connect(ui->b32, SIGNAL(clicked(bool)),this, SLOT(m32()));
    connect(ui->b33, SIGNAL(clicked(bool)),this, SLOT(m33()));
    connect(ui->b34, SIGNAL(clicked(bool)),this, SLOT(m34()));
    connect(ui->b35, SIGNAL(clicked(bool)),this, SLOT(m35()));
    connect(ui->b36, SIGNAL(clicked(bool)),this, SLOT(m36()));
    connect(ui->b37, SIGNAL(clicked(bool)),this, SLOT(m37()));
    connect(ui->b38, SIGNAL(clicked(bool)),this, SLOT(m38()));
    connect(ui->b39, SIGNAL(clicked(bool)),this, SLOT(m39()));
    connect(ui->b40, SIGNAL(clicked(bool)),this, SLOT(m40()));
    connect(ui->b41, SIGNAL(clicked(bool)),this, SLOT(m41()));
    connect(ui->b42, SIGNAL(clicked(bool)),this, SLOT(m42()));
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::sair(){
    obj->writeOFF();
    exit(0);
}

void MainWindow::RGBR(int _r){
    r = _r*0.01;
}

void MainWindow::RGBG(int _g){
    g = _g*0.01;
}

void MainWindow::RGBB(int _b){
    b = _b*0.01;
}

void MainWindow::cor(){
    obj->setColor(r,g,b,1);
}

void MainWindow::m1(){
    int z = ui->SliderPZ->value();
    desenhar(1, 1, z);
}

void MainWindow::m2(){
     int z = ui->SliderPZ->value();
     desenhar(2, 1, z);
}

void MainWindow::m3()
{
    int z = ui->SliderPZ->value();
    desenhar(3, 1, z);

}

void MainWindow::m4()
{
    int z = ui->SliderPZ->value();
    desenhar(4, 1, z);

}

void MainWindow::m5()
{
    int z = ui->SliderPZ->value();
    desenhar(5, 1, z);

}

void MainWindow::m6()
{
    int z = ui->SliderPZ->value();
    desenhar(6, 1, z);

}

void MainWindow::m7()
{
    int z = ui->SliderPZ->value();
    desenhar(7, 1, z);

}

void MainWindow::m8()
{
    int z = ui->SliderPZ->value();
    desenhar(1, 2, z);

}

void MainWindow::m9()
{
    int z = ui->SliderPZ->value();
    desenhar(2, 2, z);

}

void MainWindow::m10()
{
    int z = ui->SliderPZ->value();
    desenhar(3, 2, z);

}

void MainWindow::m11()
{
    int z = ui->SliderPZ->value();
    desenhar(4, 2, z);

}

void MainWindow::m12()
{
    int z = ui->SliderPZ->value();
    desenhar(5, 2, z);

}

void MainWindow::m13()
{
    int z = ui->SliderPZ->value();
    desenhar(6, 2, z);

}

void MainWindow::m14()
{
    int z = ui->SliderPZ->value();
    desenhar(7, 2, z);

}

void MainWindow::m15()
{
    int z = ui->SliderPZ->value();
    desenhar(1, 3, z);

}

void MainWindow::m16()
{
    int z = ui->SliderPZ->value();
    desenhar(2, 3, z);

}

void MainWindow::m17()
{
    int z = ui->SliderPZ->value();
    desenhar(3, 3, z);

}

void MainWindow::m18()
{
    int z = ui->SliderPZ->value();
    desenhar(4, 3, z);

}

void MainWindow::m19()
{
    int z = ui->SliderPZ->value();
    desenhar(5, 3, z);

}

void MainWindow::m20()
{
    int z = ui->SliderPZ->value();
    desenhar(6, 3, z);

}

void MainWindow::m21()
{
    int z = ui->SliderPZ->value();
    desenhar(7, 3, z);

}

void MainWindow::m22()
{
    int z = ui->SliderPZ->value();
    desenhar(1, 4, z);

}

void MainWindow::m23()
{
    int z = ui->SliderPZ->value();
    desenhar(2, 4, z);

}

void MainWindow::m24()
{
    int z = ui->SliderPZ->value();
    desenhar(3, 4, z);

}

void MainWindow::m25()
{
    int z = ui->SliderPZ->value();
    desenhar(4, 4, z);

}

void MainWindow::m26()
{
    int z = ui->SliderPZ->value();
    desenhar(5, 4, z);

}

void MainWindow::m27()
{
    int z = ui->SliderPZ->value();
    desenhar(6, 4, z);

}

void MainWindow::m28()
{
    int z = ui->SliderPZ->value();
    desenhar(7, 4, z);

}

void MainWindow::m29()
{
    int z = ui->SliderPZ->value();
    desenhar(1, 5, z);

}

void MainWindow::m30()
{
    int z = ui->SliderPZ->value();
    desenhar(2, 5, z);

}

void MainWindow::m31()
{
    int z = ui->SliderPZ->value();
    desenhar(3, 5, z);

}

void MainWindow::m32()
{
    int z = ui->SliderPZ->value();
    desenhar(4, 5, z);

}

void MainWindow::m33()
{
    int z = ui->SliderPZ->value();
    desenhar(5, 5, z);

}

void MainWindow::m34()
{
    int z = ui->SliderPZ->value();
    desenhar(6, 5, z);

}

void MainWindow::m35()
{
    int z = ui->SliderPZ->value();
    desenhar(7, 5, z);

}

void MainWindow::m36()
{
    int z = ui->SliderPZ->value();
    desenhar(1, 6, z);

}

void MainWindow::m37()
{
    int z = ui->SliderPZ->value();
    desenhar(2, 6, z);

}

void MainWindow::m38()
{
    int z = ui->SliderPZ->value();
    desenhar(3, 6, z);

}

void MainWindow::m39()
{
    int z = ui->SliderPZ->value();
    desenhar(4, 6, z);

}

void MainWindow::m40()
{
    int z = ui->SliderPZ->value();
    desenhar(5, 6, z);

}

void MainWindow::m41()
{
    int z = ui->SliderPZ->value();
    desenhar(6, 6, z);

}

void MainWindow::m42()
{
    int z = ui->SliderPZ->value();
    desenhar(7, 6, z);

}

void MainWindow::putvoxel(){
    escollha = 1;
}

void MainWindow::cutvoxel(){
    escollha = 2;
}

void MainWindow::putbox(){
    escollha = 3;
}

void MainWindow::cutbox(){
    escollha = 4;
}

void MainWindow::putsphere(){
    escollha = 5;
}

void MainWindow::cutsphere(){
    escollha = 6;
}

void MainWindow::putellipse(){
    escollha = 7;
}

void MainWindow::cutellipse(){
    escollha = 8;
}


void MainWindow::desenhar(int x, int y, int z){
    e = ui->SliderX->value();
    f = ui->SliderY->value();
    d = ui->SliderZ->value();
    h = ui->SliderR2->value();
    if(escollha == 1){
        obj->putVoxel(x, y, z);
    }
    else if(escollha == 2){
        obj->cutVoxel(x, y, z);
    }
    else if(escollha == 3){
        obj->putBox(x-e,y-f,z+d,x+e,y+f,z+d);
    }
    else if(escollha == 4){
        obj->cutBox(x-e,y-f,z+d,x+e,y+f,z+d);
    }
    else if(escollha == 5){
        obj->putSphere(x, y, z, h);
    }
    else if(escollha == 6){
        obj->cutSphere(x, y, z, h);
    }
    else if(escollha == 7){
        obj->putEllipsoid(x, y, z, e, f, d);
    }
    else if(escollha == 8){
        obj->cutEllipsoid(x, y, z, e, f, d);
    }
}
