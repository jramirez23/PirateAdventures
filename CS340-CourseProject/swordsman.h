#ifndef SWORDSMAN_H
#define SWORDSMAN_H
#include "Enemy.h"

class swordsman: public Enemy
{
private:
  bool lef;
public:
  swordsman(int clev, int cx, int cy);
  virtual void doTurn(Character *Hero);
  virtual QImage getPic();
  virtual void drawSelf(QPainter *g, int gx, int gy);

};

#endif // SWORDSMAN_H
