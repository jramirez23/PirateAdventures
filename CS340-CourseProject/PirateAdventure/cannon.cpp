#include "cannon.h"

Cannon::Cannon(int clev, int cx, int cy): Enemy(clev,cx,cy)
{
    if(clev==0){
        currentHP=-1;
        damage=0;
    }else if(clev==1){
        currentHP=20;
        damage=20;
        maxctr=3;
    }else if(clev==2){
    currentHP=30;
    damage=25;
    maxctr=3;
    }else if(clev==3){
    currentHP=40;
    damage=30;
    maxctr=2;
    }
  if(currentHP<0){
      maxHP=0;
  }else{
      maxHP=currentHP;
  }
  ctr=maxctr;

}
void Cannon::doTurn(Character *Hero)
{
  if(Alive==false){
      return;
    }
  if(ctr>1){
      ctr--;
    }else{
      if(Hero->getPanel()==xpos){
          Hero->getDamaged(damage);
        }
      ctr=maxctr;
    }

}
QImage Cannon::getPic(){
    return QImage("images/cann.png");
}
void Cannon::drawSelf(QPainter* g, int gx, int gy){
    g->drawImage(gx,gy,QImage("images/cann.png"));

    g->fillRect(gx+5,gy+45,45,10,Qt::gray);
    g->drawText(gx+10,gy,QString::number(ctr));
    QString dText="Cannon";
    dText.append(QString::number(currentHP));
    g->drawText(gx+7,gy+54,dText);
}
