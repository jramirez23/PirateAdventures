#include "brokenshot.h"

brokenshot::brokenshot(int dam):attackmove(dam)
{
}

void brokenshot::doAttack(int hpanel, Enemy* Enemies[3],animItems* anim){
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
  int rigpan=hpanel+1;
  int lefpan=hpanel-1;
  anim->reset();
  if(rigpan<3){
      anim->setHit(rigpan,1,1);
  }
  if(lefpan>=0){
      anim->setHit(lefpan,1,1);
  }
  target->getDamaged(damage);

}

void brokenshot::getHover(int hpanel, Enemy* Enemies[3],animItems* anim){
    Enemies;
    int rigpan=hpanel+1;
    int lefpan=hpanel-1;
    anim->reset();
    if(rigpan<3){
        anim->setHit(rigpan,1,1);
    }
    if(lefpan>=0){
        anim->setHit(lefpan,1,1);
    }


}
QString brokenshot::getString(){
    QString ret ="Broken shotgun: ";

    ret.append(QString::number(damage));
    return ret;
}


QImage brokenshot::getImage(){
     return QImage("images/brokenshot.png");
}
