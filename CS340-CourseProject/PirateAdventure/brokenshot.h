#ifndef BROKENSHOT_H
#define BROKENSHOT_H
#include "attackmove.h"

class brokenshot: public attackmove
{
public:
    brokenshot(int dam);
    virtual QString getString();
    virtual QImage getImage();
     virtual void getHover(int hpanel, Enemy* Enemies[3],animItems* anim);
    virtual void doAttack(int hpanel, Enemy* Enemies[],animItems* anim);
};

#endif // BROKENSHOT_H
