#ifndef ATTACKMOVE_H
#define ATTACKMOVE_H
//#include "Character.h"
#include "Enemy.h"
#include "animitems.h"
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
  virtual void doAttack(int hpanel,Enemy* Enemies[3], animItems* anim );
  virtual QString getString();
  virtual QImage getImage();
  virtual void getHover(int hpanel, Enemy* Enemies[3],animItems* anim);

};

#endif // ATTACKMOVE_H

