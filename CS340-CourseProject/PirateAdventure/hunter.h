#ifndef HUNTER_H
#define HUNTER_H
#include "Enemy.h"

class Hunter: public Enemy
{
private:
  bool lef;
public:
  Hunter(int clev, int cx, int cy, bool cup);
  virtual void doTurn(Character *Hero);
  bool getLef();
  void setLef(bool clef);
  virtual QImage getPic();
  virtual void drawSelf(QPainter *g, int gx, int gy);
};

#endif // HUNTER_H
