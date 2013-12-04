<<<<<<< HEAD
#ifndef XGUN_H
#define XGUN_H
#include "attackmove.h"

class xgun:public attackmove
{
public:
  xgun(int dam);
  virtual QString getString();
  virtual void doAttack(int hpanel, Enemy *Enemies[]);
};

#endif // XGUN_H
=======
#ifndef XGUN_H
#define XGUN_H
#include "attackmove.h"

class xgun:public attackmove
{
public:
  xgun(int dam);
  virtual QString getString();
  virtual QImage getImage();
  virtual void doAttack(int hpanel, Enemy *Enemies[]);
};

#endif // XGUN_H
>>>>>>> 87dd27675240c67b0ea9a10611c9d6c5bf4dfb0d
