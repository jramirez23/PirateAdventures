#ifndef SKELETON_H
#define SKELETON_H
#include "Enemy.h"

class Skeleton: public Enemy
{
private:
    bool isAttacking;
public:
  Skeleton(int clev, int cx, int cy);
  virtual void doTurn(Character *Hero);
  virtual QImage getPic();
  virtual void drawSelf(QPainter *g, int gx, int gy);
};

#endif // SKELETON_H
