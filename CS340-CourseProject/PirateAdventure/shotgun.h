#ifndef SHOTGUN_H
#define SHOTGUN_H
#include "attackmove.h"


class shotgun: public attackmove
{
public:
  shotgun(int dam);
  virtual QString getString();
  virtual QImage getImage();
  virtual void getHover(int hpanel, Enemy* Enemies[3],animItems* anim);
  virtual void doAttack(int hpanel, Enemy* Enemies[],animItems* anim);
};



#endif // SHOTGUN_H
