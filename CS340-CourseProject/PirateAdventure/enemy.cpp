#include "enemy.h"

//Enemy::Enemy(int startHP, int cx, int cy)
Enemy::Enemy(int clev, int cx, int cy)
{
  //currentHP=startHP;
    level=clev;
    if(clev==0){
        currentHP=-1;
        damage=0;
    }else if(clev==1){
        currentHP=10;
        damage=10;
    }else if(clev==2){
    currentHP=20;
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


  //level=slevel;
  //exp=sexp;
  //nextexp=snextexp;

  //heropanel=cpanel;
  xpos=cx;
  ypos=cy;

  inTurn=false;
  canmove=false;
  Alive=false;
  //pic.



}

Enemy::~Enemy(){

}

QImage Enemy::getPic(){
    return QImage("images/captain.png");
}

void Enemy::drawSelf(QPainter* g, int gx, int gy){
    g->drawImage(gx,gy,QImage("images/captain.png"));
    g->fillRect(gx+5,gy+45,45,10,Qt::gray);
    QString dText="Captain";
    dText.append(QString::number(currentHP));
    g->drawText(gx+7,gy+54,dText);
    //g->draw
}

void Enemy::setX(int cx){
  xpos=cx;
}
void Enemy::setY(int cy){
  ypos=cy;
}
void Enemy::setTurn(bool cmove){
  inTurn=cmove;
}
void Enemy::setMove(bool cmove){
  canmove=cmove;
}

bool Enemy::getMove(){
  return canmove;
}
bool Enemy::getTurn(){
  return inTurn;

}
int Enemy::getX(){
  return xpos;
}
int Enemy::getY(){
  return ypos;
}
int Enemy::getHP(){
  return currentHP;
}
int Enemy::getmaxHP(){
  return maxHP;

}
bool Enemy::getAlive(){
  return Alive;
}
void Enemy::setAlive(bool isAlive){
  Alive=isAlive;
  if(isAlive==false){
      currentHP=0;
      xpos=-1;
      ypos=-1;
      inTurn=false;
      canmove=false;

      //emit(Died());
    }
}
//void Enemy::Died(){
//}

//void Enemy::doAttack();

void Enemy::doTurn(Character* Hero){
  if(Alive==false){
      return;
    }
  inTurn=true;
  if(xpos==Hero->getPanel()){
      Hero->getDamaged(10);
      inTurn=false;
    }else if(xpos<Hero->getPanel()){
      if(xpos==0){
          xpos=1;

        }else if(xpos==1){
          xpos=2;
        }
         inTurn=false;
    }else if(xpos>Hero->getPanel()){
      if(xpos==2){
          xpos=1;

        }else if(xpos==1){
          xpos=0;
        }
         inTurn=false;
    }
    inTurn=false;
}


bool Enemy::getDamaged(int damage){
  if(currentHP>damage){
      currentHP-=damage;
      return false;
    }else{
      currentHP=0;
       setAlive(false);
      return true;

    }

}

void Enemy::getRestored(int recovery){
  if(currentHP+recovery>maxHP){
      currentHP=maxHP;
    }else{
      currentHP+=recovery;

    }

}



