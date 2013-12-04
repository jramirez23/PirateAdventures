#ifndef CANNON_H
#define CANNON_H
#include "Enemy.h"

class Cannon: public Enemy
{
private:
  int ctr;
  int maxctr;
public:
  Cannon(int clev, int cx, int cy);
  virtual void doTurn(Character *Hero);
  int getCtr();
  virtual QImage getPic();
  virtual void drawSelf(QPainter *g, int gx, int gy);
};

#endif // CANNON_H
