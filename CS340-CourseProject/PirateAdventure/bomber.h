#ifndef BOMBER_H
#define BOMBER_H
#include "Enemy.h"

class Bomber: public Enemy
{
private:
  int ctr;
  int maxctr;
public:
  Bomber(int clev, int cx, int cy);
  //void doAttack(*);
  virtual void doTurn(Character *Hero);
  void switchSide();
  void dropBomb(Character *Hero);
  int getCtr();
  virtual QImage getPic();
  virtual void drawSelf(QPainter *g, int gx, int gy);
};

#endif // BOMBER_H
