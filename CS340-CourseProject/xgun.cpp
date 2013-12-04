<<<<<<< HEAD
#include "xgun.h"

xgun::xgun(int dam): attackmove(dam)
{

}

void xgun::doAttack(int hpanel, Enemy *Enemies[]){
  Enemy *closest=  NULL;
  Enemy *upL= NULL;
  Enemy *downL= NULL;
  Enemy *upR= NULL;
  Enemy *downR= NULL;
  for(int i=0;i<3;i++){
      if(Enemies[i]->getX()==hpanel){
          closest=Enemies[i];
        }
    }
  if(closest==NULL){
      return;
    }
  for(int i=0;i<3;i++){
      if(closest!=Enemies[i] &&Enemies[i]->getX()==closest->getX()-1 &&Enemies[i]->getY()==closest->getY()-1){
          downL=Enemies[i];
        }
      if(closest!=Enemies[i] &&Enemies[i]->getX()==closest->getX()-1 &&Enemies[i]->getY()==closest->getY()+1){
          upL=Enemies[i];
        }
      if(closest!=Enemies[i] &&Enemies[i]->getX()==closest->getX()+1 &&Enemies[i]->getY()==closest->getY()+1){
          upR=Enemies[i];
        }
      if(closest!=Enemies[i] &&Enemies[i]->getX()==closest->getX()+1 &&Enemies[i]->getY()==closest->getY()-1){
          downR=Enemies[i];
        }
    }
      closest->getDamaged(damage);
      if(downL!=NULL){
          downL->getDamaged(damage);
        }

      if(upL!=NULL){
          upL->getDamaged(damage);
        }
      if(upR!=NULL){
          upR->getDamaged(damage);
        }
      if(downR!=NULL){
          downR->getDamaged(damage);
        }




}

QString xgun::getString(){
    QString ret ="Xgun: ";

    ret.append(QString::number(damage));
    return ret;
}
=======
#include "xgun.h"

xgun::xgun(int dam): attackmove(dam)
{

}

void xgun::doAttack(int hpanel, Enemy *Enemies[]){
  Enemy *closest=  NULL;
  Enemy *upL= NULL;
  Enemy *downL= NULL;
  Enemy *upR= NULL;
  Enemy *downR= NULL;
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
      if(closest!=Enemies[i] &&Enemies[i]->getX()==closest->getX()-1 &&Enemies[i]->getY()==closest->getY()-1){
          downL=Enemies[i];
        }
      if(closest!=Enemies[i] &&Enemies[i]->getX()==closest->getX()-1 &&Enemies[i]->getY()==closest->getY()+1){
          upL=Enemies[i];
        }
      if(closest!=Enemies[i] &&Enemies[i]->getX()==closest->getX()+1 &&Enemies[i]->getY()==closest->getY()+1){
          upR=Enemies[i];
        }
      if(closest!=Enemies[i] &&Enemies[i]->getX()==closest->getX()+1 &&Enemies[i]->getY()==closest->getY()-1){
          downR=Enemies[i];
        }
    }
      closest->getDamaged(damage);
      if(downL!=NULL){
          downL->getDamaged(damage);
        }

      if(upL!=NULL){
          upL->getDamaged(damage);
        }
      if(upR!=NULL){
          upR->getDamaged(damage);
        }
      if(downR!=NULL){
          downR->getDamaged(damage);
        }




}

QImage xgun::getImage(){
     return QImage("images/crossgun.png");
}



QString xgun::getString(){
    QString ret ="Xgun: ";

    ret.append(QString::number(damage));
    return ret;
}
>>>>>>> 87dd27675240c67b0ea9a10611c9d6c5bf4dfb0d
