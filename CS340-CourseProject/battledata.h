#ifndef BATTLEDATA_H
#define BATTLEDATA_H
#include "Enemy.h"
#include "hunter.h"
#include "bomber.h"
#include "cannon.h"


class battledata
{
private:
    char etype1;
    int ehp1;
    int ex1;
    int ey1;
    char etype2;
    int ehp2;
    int ex2;
    int ey2;
    char etype3;
    int ehp3;
    int ex3;
    int ey3;
    int earnedXP;
public:
    battledata(char ctype1, int chp1, int cx1, int cy1,char ctype2, int chp2, int cx2, int cy2,char ctype3, int chp3, int cx3, int cy3, int cXP);
    Enemy** retEnemies();


};

#endif // BATTLEDATA_H
