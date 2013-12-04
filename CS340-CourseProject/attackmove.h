<<<<<<< HEAD
#ifndef ATTACKMOVE_H
#define ATTACKMOVE_H
//#include "Character.h"
#include "Enemy.h"
#include <stdlib.h>


class attackmove
{
protected:
  int damage;
public:

  attackmove(int dam);
  ~attackmove();

  int getDam();

  void setDam(int dam);
  virtual void doAttack(int hpanel,Enemy* Enemies[3]);
  virtual QString getString();

};

#endif // ATTACKMOVE_H
=======
#ifndef ATTACKMOVE_H
#define ATTACKMOVE_H
//#include "Character.h"
#include "Enemy.h"
#include <stdlib.h>


class attackmove
{
protected:
  int damage;
public:

  attackmove(int dam);
  ~attackmove();

  int getDam();

  void setDam(int dam);
  virtual void doAttack(int hpanel,Enemy* Enemies[3]);
  virtual QString getString();
  virtual QImage getImage();

};

#endif // ATTACKMOVE_H
>>>>>>> 87dd27675240c67b0ea9a10611c9d6c5bf4dfb0d
