#include "hookslash.h"

Hookslash::Hookslash(int dam):attackmove(dam)
{
}


void Hookslash::doAttack(int hpanel, Enemy *Enemies[]){
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
  target->getDamaged(damage);

}

QString Hookslash::getString(){
    QString ret ="Hook Slash: ";

    ret.append(QString::number(damage));
    return ret;
}


QImage Hookslash::getImage(){
     return QImage("images/hook.png");
}
