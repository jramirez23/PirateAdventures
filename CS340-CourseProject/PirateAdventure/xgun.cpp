#include "xgun.h"

xgun::xgun(int dam): attackmove(dam)
{

}

void xgun::doAttack(int hpanel, Enemy* Enemies[3],animItems* anim){
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
    anim->reset();
    anim->setHit(closest->getX(),closest->getY(),1);
    if(closest->getX()+1<3 && closest->getY()+1<3){
        anim->setHit(closest->getX()+1,closest->getY()+1,1);
    }
    if(closest->getX()-1>=0 && closest->getY()-1>=0){
        anim->setHit(closest->getX()-1,closest->getY()-1,1);
    }
    if(closest->getX()+1<3 && closest->getY()-1>=0){
        anim->setHit(closest->getX()+1,closest->getY()-1,1);
    }
    if(closest->getX()-1>=0 && closest->getY()+1<3 ){
        anim->setHit(closest->getX()-1,closest->getY()+1,1);
    }


}

void xgun::getHover(int hpanel, Enemy* Enemies[3],animItems* anim){
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


      anim->reset();
      anim->setHit(closest->getX(),closest->getY(),1);
      if(closest->getX()+1<3 && closest->getY()+1<3){
          anim->setHit(closest->getX()+1,closest->getY()+1,1);
      }
      if(closest->getX()-1>=0 && closest->getY()-1>=0){
          anim->setHit(closest->getX()-1,closest->getY()-1,1);
      }
      if(closest->getX()+1<3 && closest->getY()-1>=0){
          anim->setHit(closest->getX()+1,closest->getY()-1,1);
      }
      if(closest->getX()-1>=0 && closest->getY()+1<3 ){
          anim->setHit(closest->getX()-1,closest->getY()+1,1);
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
