#include "attacklist.h"


attackList::attackList()
{
  for(int i=0; i<5; i++){
      alist[i]=NULL;
    }
  curr=-1;
  full=0;
}
/*
void attackList::initList(char c1, int d1, char c2, int d2, char c3, int d3, char c4, int d4){
  alist[0]=

}
*/

void attackList::changeMove(int pos, attackmove* am){
  if(alist[pos]==NULL){
      full++;
      curr++;
    }
  alist[pos]=am;

}
void attackList::addMove(attackmove* am){
  if(full>3){
      return;
    }

  full++;
  curr++;
  alist[curr]=am;

}

attackmove* attackList::getAttack(){
  if(full>0 && curr>-1){
    return alist[curr--];

  }else{
      return NULL;
    }

}
void attackList::reset(){
    curr=full-1;
}

attackmove* attackList::getAttackAt(int pos){
    return alist[pos];

}
int attackList::getCurr(){
    return curr;
}
