#include "swordsman.h"

swordsman::swordsman(int clev, int cx, int cy): Enemy(clev,cx,cy)
{
    if(clev==0){
        currentHP=-1;
        damage=0;
    }else if(clev==1){
        currentHP=20;
        damage=15;
    }else if(clev==2){
    currentHP=25;
    damage=20;
    }else if(clev==3){
    currentHP=30;
    damage=25;
    }
  if(currentHP<0){
      maxHP=0;
  }else{
      maxHP=currentHP;
  }
  //lef=clef;
    if(cx>0){
        lef=true;
    }else{
        lef=false;
    }
}

void swordsman::doTurn(Character *Hero){
  if(Alive==false){
      return;
    }
  if(xpos==0){
      lef=false;
      xpos=1;
    }else if(xpos==1){
      if(lef){
          xpos=0;
        }else{
          xpos=2;
        }
    }else if(xpos==2){
      lef=true;
      xpos=1;
    }
  if((ypos==0 || ypos==1) && xpos==Hero->getPanel()){
      Hero->getDamaged(damage);
  }/*else if(ypos==0 && xpos==Hero->getPanel()){
      Hero->getDamaged(20);
  }*/

}
QImage swordsman::getPic(){
    return QImage("images/swordsman.png");
}

void swordsman::drawSelf(QPainter* g, int gx, int gy){
    g->drawImage(gx,gy,QImage("images/swordsman.png"));
    g->fillRect(gx+2,gy+45,64,10,Qt::gray);
    QString dText="Swordsman";
    dText.append(QString::number(currentHP));
    g->drawText(gx+4,gy+54,dText);
}
