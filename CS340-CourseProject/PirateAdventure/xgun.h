#ifndef XGUN_H
#define XGUN_H
#include "attackmove.h"

class xgun:public attackmove
{
public:
  xgun(int dam);
  virtual QString getString();
  virtual QImage getImage();
   virtual void getHover(int hpanel, Enemy* Enemies[], animItems* anim);
  virtual void doAttack(int hpanel, Enemy* Enemies[],animItems* anim);
};

#endif // XGUN_H
