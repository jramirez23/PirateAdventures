#ifndef BROKENGUN_H
#define BROKENGUN_H
#include "attackmove.h"

class brokengun: public attackmove
{
public:
    brokengun(int dam);
    virtual QString getString();
    virtual QImage getImage();
    virtual void doAttack(int hpanel, Enemy *Enemies[]);
};

#endif // BROKENGUN_H
