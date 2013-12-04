#include "Character.h"
#include "attackmove.h"

Character::Character(int startHP, int sexp, int cdam, int cpanel)
{
  currentHP=startHP;
  maxHP=startHP;

  //level=slevel;
  exp=sexp;
  attDam=cdam;
  //nextexp=snextexp;
  canmove=false;
  heropanel=cpanel;
  inTurn=false;
  gold=0;
  //mainAttack=new attackmove(10);



}
Character::~Character(){

}

bool Character::getDamaged(int damage){
  if(currentHP>damage){
      currentHP-=damage;
      return false;
    }else{
      currentHP=0;
      return true;
    }

}

void Character::getRestored(int recovery){
  if(currentHP+recovery>maxHP){
      currentHP=maxHP;
    }else{
      currentHP+=recovery;

    }

}


int Character::getGold(){
    return gold;

}
void Character::incGold(int amt){
    gold+=amt;
}

int Character::getHP(){
  return currentHP;

}
/*
int Character::getexp(){
  return exp;

}
*/
int Character::getmaxHP(){
  return maxHP;
}
/*
int Character::getlevel(){
  return level;
}
*/
/*
int Character::getnextexp(){
  return nextexp;
}
*/


void Character::setHP(int nhp){
  currentHP=nhp;

}

void Character::setexp(int nexp){
  exp=nexp;

}
void Character::setmaxHP(int nmaxhp){
  maxHP=nmaxhp;
}
/*
void Character::setlevel(int nlevel){
  level=nlevel;
}
*/
/*
void Character::setnextexp(int nnextexp){
  nextexp=nnextexp;
}
*/

void Character::setCanMove(bool cmove){
  canmove=cmove;

}
bool Character::getCanMove(){
  return canmove;
}
int Character::getPanel(){
  return heropanel;
}
void Character::setPanel(int cpanel){
  heropanel=cpanel;
}
bool Character::isTurn(){
  return inTurn;
}
void Character::setTurn(bool cturn){
  inTurn=cturn;
}
int Character::getDam(){
  return attDam;
}
void Character::setDam(int cdam){
  attDam=cdam;
}

/*
 attackmove* Character::getAttack(){
   return mainAttack;
 }
 */

