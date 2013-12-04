#include "shotgun.h"


shotgun::shotgun(int dam):attackmove(dam)
{

}
void shotgun::doAttack(int hpanel, Enemy* Enemies[3],animItems* anim){
  Enemy *closest=  NULL;
  Enemy *behind= NULL;
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
    }
  for(int i=0;i<3;i++){
      if(closest!=Enemies[i] &&Enemies[i]->getX()==closest->getX() &&Enemies[i]->getY()==closest->getY()+1){
          behind=Enemies[i];
        }
    }
  int closex=closest->getX();
  int closey=closest->getY();
  anim->reset();
  anim->setHit(closex,closey,1);

      closest->getDamaged(damage);
      if(behind==NULL){
          return;
        }

      if(closey+1<3){
          anim->setHit(closex,closey+1,1);
      }

      behind->getDamaged(damage);


}


void shotgun::getHover(int hpanel, Enemy* Enemies[3],animItems* anim){
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
      }

    int closex=closest->getX();
    int closey=closest->getY();
    anim->reset();
    anim->setHit(closex,closey,1);


        if(closey+1<3){
            anim->setHit(closex,closey+1,1);
        }
}

QString shotgun::getString(){
    QString ret ="Shotgun: ";

    ret.append(QString::number(damage));
    return ret;
}


QImage shotgun::getImage(){
     return QImage("images/shotgun.png");
}



