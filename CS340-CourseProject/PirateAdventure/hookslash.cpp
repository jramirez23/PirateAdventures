#include "hookslash.h"

Hookslash::Hookslash(int dam):attackmove(dam)
{
}


void Hookslash::doAttack(int hpanel, Enemy* Enemies[3],animItems* anim){
  Enemy *target =  NULL;
  //rules decide there is one enemies per row
  //Enemy *right =  NULL;
 // Enemy *front =  NULL;
  //Enemy *right= NULL;
  for(int i=0;i<3;i++){
      if(Enemies[i]->getY()==0 && ((Enemies[i]->getX()<=hpanel+1)||(Enemies[i]->getX()>=hpanel-1))){
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
      anim->setHit(rigpan,0,1);
  }
  if(lefpan>=0){
      anim->setHit(lefpan,0,1);
  }
  anim->setHit(hpanel,0,1);

  target->getDamaged(damage);

}
void Hookslash::getHover(int hpanel, Enemy* Enemies[], animItems* anim){
    Enemies;
    int rigpan=hpanel+1;
    int lefpan=hpanel-1;
    anim->reset();
    if(rigpan<3){
        anim->setHit(rigpan,0,1);
    }
    if(lefpan>=0){
        anim->setHit(lefpan,0,1);
    }
    anim->setHit(hpanel,0,1);
}

QString Hookslash::getString(){
    QString ret ="Hook Slash: ";

    ret.append(QString::number(damage));
    return ret;
}


QImage Hookslash::getImage(){
     return QImage("images/hook.png");
}
