#include "brokengun.h"

brokengun::brokengun(int dam):attackmove(dam)
{
}


void brokengun::doAttack(int hpanel, Enemy *Enemies[]){
  Enemy *target=  NULL;
  //Enemy *right= NULL;
  for(int i=0;i<3;i++){
      if((Enemies[i]->getX()==hpanel-1) && Enemies[i]->getY()==2){
          target=Enemies[i];
        }else if((Enemies[i]->getX()==hpanel+1) && Enemies[i]->getY()==2){
          target=Enemies[i];
        }
    }

  if(target==NULL){
      return;
    }
  target->getDamaged(damage);

}

QString brokengun::getString(){
    QString ret ="Broken gun: ";

    ret.append(QString::number(damage));
    return ret;
}


QImage brokengun::getImage(){
     return QImage("images/brokengun.png");
}
