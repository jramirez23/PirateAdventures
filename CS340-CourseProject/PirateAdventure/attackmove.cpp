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






//void attackmove::doAttack(int hpanel, Enemy* Enemies[3]){
void attackmove::doAttack(int hpanel, Enemy* Enemies[3],animItems* anim){
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
      anim->reset();
      anim->setHit(closest->getX(),closest->getY(),1);

      closest->getDamaged(damage);
    }
}

void attackmove::getHover(int hpanel, Enemy* Enemies[3],animItems* anim){
    Enemy* closest=NULL;
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
        anim->reset();
        anim->setHit(closest->getX(),closest->getY(),1);
    }
}

QImage attackmove::getImage(){
     return QImage("images/gun.png");
}










