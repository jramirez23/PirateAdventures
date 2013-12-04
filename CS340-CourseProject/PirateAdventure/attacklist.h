#ifndef ATTACKLIST_H
#define ATTACKLIST_H
#include "attackmove.h"

class attackList
{
private:
  attackmove* alist[5];
  bool used[5];
  int curr;
  int full;
public:
  attackList();
  //void initList(char c1, int d1, char c2, int d2, char c3, int d3, char c4, int d4);
  void changeMove(int pos, attackmove* am);
  attackmove* getAttack();
  attackmove* getAttackAt(int pos);
  void addMove(attackmove* am);
  int getCurr();
  void reset();
  attackmove* takeMoveAt(int pos);
  bool isUsedAt(int pos);
  int getFull();

};

#endif // ATTACKLIST_H
