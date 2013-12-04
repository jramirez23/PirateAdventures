#ifndef HOOKSLASH_H
#define HOOKSLASH_H
#include "attackmove.h"

class Hookslash: public attackmove
{
public:
    Hookslash(int dam);
    virtual QString getString();
    virtual QImage getImage();
    virtual void doAttack(int hpanel, Enemy *Enemies[]);
};

#endif // HOOKSLASH_H
