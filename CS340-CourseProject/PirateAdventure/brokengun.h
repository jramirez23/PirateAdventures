#ifndef BROKENGUN_H
#define BROKENGUN_H
#include "attackmove.h"

class brokengun: public attackmove
{
public:
    brokengun(int dam);
    virtual QString getString();
    virtual QImage getImage();
     virtual void getHover(int hpanel, Enemy* Enemies[3],animItems* anim);
    virtual void doAttack(int hpanel, Enemy* Enemies[],animItems* anim);
};

#endif // BROKENGUN_H
