#ifndef SWORDSLASH_H
#define SWORDSLASH_H
#include "attackmove.h"

class swordslash: public attackmove
{
public:
    swordslash(int dam);
    virtual QString getString();
    virtual QImage getImage();
     virtual void getHover(int hpanel, Enemy* Enemies[3],animItems* anim);
    virtual void doAttack(int hpanel, Enemy* Enemies[],animItems* anim);
};

#endif // SWORDSLASH_H
