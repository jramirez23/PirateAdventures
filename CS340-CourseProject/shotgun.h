<<<<<<< HEAD
#ifndef SHOTGUN_H
#define SHOTGUN_H
#include "attackmove.h"


class shotgun: public attackmove
{
public:
  shotgun(int dam);
  virtual QString getString();
  virtual void doAttack(int hpanel, Enemy *Enemies[]);
};



#endif // SHOTGUN_H
=======
#ifndef SHOTGUN_H
#define SHOTGUN_H
#include "attackmove.h"


class shotgun: public attackmove
{
public:
  shotgun(int dam);
  virtual QString getString();
  virtual QImage getImage();
  virtual void doAttack(int hpanel, Enemy *Enemies[]);
};



#endif // SHOTGUN_H
>>>>>>> 87dd27675240c67b0ea9a10611c9d6c5bf4dfb0d
