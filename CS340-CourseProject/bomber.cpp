#include "bomber.h"

Bomber::Bomber(int clev, int cx, int cy): Enemy(clev,cx,cy)
{

    if(clev==0){
        currentHP=-1;
        damage=0;
    }else if(clev==1){
        currentHP=20;
        damage=5;
        maxctr=3;
    }else if(clev==2){
    currentHP=25;
    damage=10;
    maxctr=3;
    }else if(clev==3){
    currentHP=30;
    damage=15;
    maxctr=2;
    }
  if(currentHP<0){
      maxHP=0;
  }else{
      maxHP=currentHP;
  }
  ctr=maxctr;

}
void Bomber::doTurn(Character *Hero)
{
  if(Alive==false){
      return;
    }
  if(ctr>1){
      switchSide();
      ctr--;

    }else{
      dropBomb(Hero);
      ctr=maxctr;
    }

}
int Bomber::getCtr(){
  return ctr;
}

void Bomber::switchSide(){
  if(xpos<2){
      xpos=2;
    }else{
      xpos=0;
    }
}

void Bomber::dropBomb(Character *Hero){
  if(xpos==0){
      if(Hero->getPanel()==0 || Hero->getPanel()==1){
          Hero->getDamaged(damage);
        }
    }else if(xpos==2){
      if(Hero->getPanel()==2 || Hero->getPanel()==1){
          Hero->getDamaged(damage);
        }
    }
}
QImage Bomber::getPic(){
    return QImage("images/bomber.png");
}

void Bomber::drawSelf(QPainter* g, int gx, int gy){
    g->drawImage(gx,gy,QImage("images/bomber.png"));
    g->fillRect(gx+5,gy+45,45,10,Qt::gray);
    QString dText="Bomber";
    dText.append(QString::number(currentHP));
    g->drawText(gx+7,gy+54,dText);
}


