#ifndef SWORDSLASH_H
#define SWORDSLASH_H
#include "attackmove.h"

class swordslash: public attackmove
{
public:
    swordslash(int dam);
    virtual QString getString();
    virtual QImage getImage();
    virtual void doAttack(int hpanel, Enemy *Enemies[]);
};

#endif // SWORDSLASH_H
