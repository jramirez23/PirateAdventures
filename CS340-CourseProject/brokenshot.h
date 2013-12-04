#ifndef BROKENSHOT_H
#define BROKENSHOT_H
#include "attackmove.h"

class brokenshot: public attackmove
{
public:
    brokenshot(int dam);
    virtual QString getString();
    virtual QImage getImage();
    virtual void doAttack(int hpanel, Enemy *Enemies[]);
};

#endif // BROKENSHOT_H
