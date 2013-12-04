#include "hunter.h"

Hunter::Hunter(int clev, int cx, int cy, bool clef): Enemy(clev,cx,cy)
{
    if(clev==0){
        currentHP=-1;
        damage=0;
    }else if(clev==1){
        currentHP=20;
        damage=10;

    }else if(clev==2){
    currentHP=25;
    damage=15;
    }else if(clev==3){
    currentHP=30;
    damage=20;
    }
  if(currentHP<0){
      maxHP=0;
  }else{
      maxHP=currentHP;
  }
  lef=clef;
}
bool Hunter::getLef(){
  return lef;
}
void Hunter::setLef(bool clef){
  lef=clef;

}

void Hunter::doTurn(Character *Hero){
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
  if(xpos==Hero->getPanel()){
      Hero->getDamaged(5);
    }

}
QImage Hunter::getPic(){
    return QImage("images/captain.png");
}
void Hunter::drawSelf(QPainter* g, int gx, int gy){
    g->drawImage(gx,gy,QImage("images/gunman.png"));
    g->fillRect(gx+5,gy+45,45,10,Qt::gray);
    QString dText="Gunman";
    dText.append(QString::number(currentHP));
    g->drawText(gx+7,gy+54,dText);
    //g->draw
}
