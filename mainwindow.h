#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets>
#include <QMainWindow>
#include <cstdlib>
#include <QMouseEvent>
#include "sculptor.hpp"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();  

public slots:
    void sair();
    void RGBR(int _r);
    void RGBG(int _g);
    void RGBB(int _b);
    void cor();
    void m1();
    void m2();
    void m3();
    void m4();
    void m5();
    void m6();
    void m7();
    void m8();
    void m9();
    void m10();
    void m11();
    void m12();
    void m13();
    void m14();
    void m15();
    void m16();
    void m17();
    void m18();
    void m19();
    void m20();
    void m21();
    void m22();
    void m23();
    void m24();
    void m25();
    void m26();
    void m27();
    void m28();
    void m29();
    void m30();
    void m31();
    void m32();
    void m33();
    void m34();
    void m35();
    void m36();
    void m37();
    void m38();
    void m39();
    void m40();
    void m41();
    void m42();


private slots:
    void putvoxel();
    void cutvoxel();
    void putbox();
    void cutbox();
    void putsphere();
    void cutsphere();
    void putellipse();
    void cutellipse();
    void desenhar(int x, int y, int z);

private:
    Ui::MainWindow *ui;
    int nx, ny, nz;
    int e, f, d, h;
    float r, g, b;
    int escollha = 1;
    class Sculptor *obj;

};
#endif // MAINWINDOW_H
