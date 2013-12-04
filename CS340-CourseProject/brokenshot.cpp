#include "brokenshot.h"

brokenshot::brokenshot(int dam):attackmove(dam)
{
}

void brokenshot::doAttack(int hpanel, Enemy *Enemies[]){
  Enemy *target=  NULL;
  //Enemy *right= NULL;
  for(int i=0;i<3;i++){
      if((Enemies[i]->getX()==hpanel-1) && Enemies[i]->getY()==1){
          target=Enemies[i];
        }else if((Enemies[i]->getX()==hpanel+1) && Enemies[i]->getY()==1){
          target=Enemies[i];
        }
    }

  if(target==NULL){
      return;
    }
  target->getDamaged(damage);

}

QString brokenshot::getString(){
    QString ret ="Broken shotgun: ";

    ret.append(QString::number(damage));
    return ret;
}


QImage brokenshot::getImage(){
     return QImage("images/brokenshot.png");
}
