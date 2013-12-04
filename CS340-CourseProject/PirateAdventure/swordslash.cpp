#include "swordslash.h"

swordslash::swordslash(int dam):attackmove(dam)
{
}

void swordslash::doAttack(int hpanel, Enemy* Enemies[3],animItems* anim){
  Enemy *row0 =  NULL;
  Enemy *row1 = NULL;
  //rules decide there is one enemies per row
  //Enemy *right =  NULL;
 // Enemy *front =  NULL;
  //Enemy *right= NULL;
  for(int i=0;i<3;i++){
      if(Enemies[i]->getY()==0 && (Enemies[i]->getX()==hpanel)){
          row0=Enemies[i];
      }
      if(Enemies[i]->getY()==1 && (Enemies[i]->getX()==hpanel)){
          row1=Enemies[i];
      }
    }

  if(row0!=NULL){
      row0->getDamaged(damage);
    }
  if(row1!=NULL){
      row1->getDamaged(damage);
  }
  anim->reset();
  anim->setHit(hpanel,0,1);
  anim->setHit(hpanel,1,1);
  //target->getDamaged(damage);

}
void swordslash::getHover(int hpanel, Enemy* Enemies[3],animItems* anim){
    Enemies;
    anim->reset();
    anim->setHit(hpanel,0,1);
    anim->setHit(hpanel,1,1);
}

QString swordslash::getString(){
    QString ret ="Sword Slash: ";

    ret.append(QString::number(damage));
    return ret;
}


QImage swordslash::getImage(){
     return QImage("images/sword.png");
}
