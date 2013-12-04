<<<<<<< HEAD
#include "attackmove.h"
//#include <stdio.h>
//#include <stdlib.h>



attackmove::attackmove(int dam)
{
  damage=dam;
}

attackmove::~attackmove(){

}

QString attackmove::getString(){
    QString ret ="Gun: ";

    ret.append(QString::number(damage));
    return ret;
}






void attackmove::doAttack(int hpanel, Enemy* Enemies[3]){
  //int hpanel=Hero->getPanel();
  Enemy *closest=  NULL;
  for(int i=0;i<3;i++){
      if(Enemies[i]->getX()==hpanel){
          closest=Enemies[i];
        }
    }
  if(closest==NULL){
      return;
    }else{
      closest->getDamaged(damage);
    }
}
=======
#include "attackmove.h"
//#include <stdio.h>
//#include <stdlib.h>



attackmove::attackmove(int dam)
{
  damage=dam;
}

attackmove::~attackmove(){

}

QString attackmove::getString(){
    QString ret ="Gun: ";

    ret.append(QString::number(damage));
    return ret;
}






void attackmove::doAttack(int hpanel, Enemy* Enemies[3]){
  //int hpanel=Hero->getPanel();
  Enemy *closest=  NULL;

  for(int i=0;i<3;i++){

      if(Enemies[i]->getX()==hpanel){
          if(closest==NULL){
              closest=Enemies[i];
          }else{
              if(Enemies[i]->getY()<closest->getY()){
                  closest=Enemies[i];
              }
          }


        }
    }
  if(closest==NULL){
      return;
    }else{
      closest->getDamaged(damage);
    }
}

QImage attackmove::getImage(){
     return QImage("images/gun.png");
}










>>>>>>> 87dd27675240c67b0ea9a10611c9d6c5bf4dfb0d
