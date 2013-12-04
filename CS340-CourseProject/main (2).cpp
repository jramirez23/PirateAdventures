#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QProgressBar>
#include "Character.h"
#include "attackmove.h"
#include "attacklist.h"
#include <iostream>


int main(int argc, char *argv[])
{


  QApplication a(argc, argv);
  MainWindow w;
  //w.show();
  


  //Character *E=new Character(50,1,0,1000);

  //HeroHealthBar->setValue(H->getHP());

  //HeroHealthBar->maximum=H->getmaxHP();
  //HeroHealthBar->value=H->getHP();
  //EnemyHealthBar->maximum=E->getmaxHP();
  //EnemyHealthBar->value=E->getHP();
  w.show();



  return a.exec();
}
