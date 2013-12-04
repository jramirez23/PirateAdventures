#include "skeleton.h"

Skeleton::Skeleton(int clev, int cx, int cy): Enemy(clev,cx,cy)
{
    if(clev==0){
        currentHP=-1;
        damage=0;
    }else if(clev==1){
        currentHP=20;
        damage=5;
    }else if(clev==2){
    currentHP=25;
    damage=10;
    }else if(clev==3){
    currentHP=30;
    damage=15;
    }
  if(currentHP<0){
      maxHP=0;
  }else{
      maxHP=currentHP;
  }
    isAttacking=false;
}

void Skeleton::doTurn(Character *Hero){
  if(Alive==false){
      return;
    }
  int mover=rand()%2;
  if(!isAttacking){
    if(xpos==0){
          //lef=false;
         xpos=1;
        }else if(xpos==1){
        if(mover>0){
           xpos=0;
            }else{
             xpos=2;
            }
        }else if(xpos==2){
        //lef=true;
        xpos=1;
        }
    if(xpos==Hero->getPanel()){
        Hero->getDamaged(damage);
        isAttacking=true;
    }
  }else{
      if(xpos==Hero->getPanel()){
          Hero->getDamaged(damage);

      }
      isAttacking=false;
  }

  /*else if(ypos==0 && xpos==Hero->getPanel()){
      Hero->getDamaged(20);
  }*/

}
QImage Skeleton::getPic(){
    return QImage("images/skeleton.png");
}

void Skeleton::drawSelf(QPainter* g, int gx, int gy){
    g->drawImage(gx,gy,QImage("images/skeleton.png"));
    g->fillRect(gx+5,gy+45,50,10,Qt::gray);
    QString dText="Skeleton";
    dText.append(QString::number(currentHP));
    g->drawText(gx+7,gy+54,dText);
}
