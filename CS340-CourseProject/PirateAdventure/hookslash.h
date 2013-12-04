#ifndef HOOKSLASH_H
#define HOOKSLASH_H
#include "attackmove.h"

class Hookslash: public attackmove
{
public:
    Hookslash(int dam);
    virtual QString getString();
    virtual QImage getImage();
     virtual void getHover(int hpanel, Enemy* Enemies[3],animItems* anim);
    virtual void doAttack(int hpanel, Enemy* Enemies[],animItems* anim);
};

#endif // HOOKSLASH_H
