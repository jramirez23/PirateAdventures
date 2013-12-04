#include "brokengun.h"

brokengun::brokengun(int dam):attackmove(dam)
{
}


void brokengun::doAttack(int hpanel, Enemy* Enemies[3],animItems* anim){
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
  int rigpan=hpanel+1;
  int lefpan=hpanel-1;
  anim->reset();
  if(rigpan<3){
      anim->setHit(rigpan,2,1);
  }
  if(lefpan>=0){
      anim->setHit(lefpan,2,1);
  }

}

void brokengun::getHover(int hpanel, Enemy* Enemies[3],animItems* anim){
    Enemies;

    int rigpan=hpanel+1;
    int lefpan=hpanel-1;
    anim->reset();
    if(rigpan<3){
        anim->setHit(rigpan,2,1);
    }
    if(lefpan>=0){
        anim->setHit(lefpan,2,1);
    }


}


QString brokengun::getString(){
    QString ret ="Broken gun: ";

    ret.append(QString::number(damage));
    return ret;
}


QImage brokengun::getImage(){
     return QImage("images/brokengun.png");
}
