#include "attacklist.h"


attackList::attackList()
{
  for(int i=0; i<5; i++){
      alist[i]=NULL;
      used[i]=false;
    }
  curr=-1;
  full=0;
}
/*
void attackList::initList(char c1, int d1, char c2, int d2, char c3, int d3, char c4, int d4){
  alist[0]=

}
*/
int attackList::getFull(){
    return full;
}

void attackList::changeMove(int pos, attackmove* am){
  if(alist[pos]==NULL){
      full++;
      curr++;
    }
  alist[pos]=am;

}
void attackList::addMove(attackmove* am){
  if(full>4){
      return;
    }

  full++;
  curr++;
  alist[curr]=am;

}

attackmove* attackList::getAttack(){
  if(full>0 && curr>-1){
      if(used[curr]){
          //used, move on to next one
          curr--;
          return getAttack();
      }else{
          used[curr]=true;
        return alist[curr--];
      }

  }else{
      return NULL;
    }

}
void attackList::reset(){
    for(int i=0; i<5; i++){
        //alist[i]=NULL;
        used[i]=false;
      }
    curr=full-1;
}
//used for printing list
attackmove* attackList::getAttackAt(int pos){
    if(pos>-1 && pos<full){

        return alist[pos];
    }
    return NULL;
}
int attackList::getCurr(){
    return curr;
}

//used for taking moves specifically, should take out moves using used
attackmove* attackList::takeMoveAt(int pos){
    if(pos>-1 && pos<=full && !used[pos]){
        used[pos]=true;

        return alist[pos];

    }
    return NULL;
}
bool attackList::isUsedAt(int pos){
    return used[pos];
}
