#include "battledata.h"

battledata::battledata(char ctype1, int chp1, int cx1, int cy1,char ctype2, int chp2, int cx2, int cy2,char ctype3, int chp3, int cx3, int cy3, int cXP)
{
    etype1=ctype1;
    ehp1=chp1;
    ex1=cx1;
    ey1=cy1;
    etype2=ctype2;
    ehp2=chp2;
    ex2=cx2;
    ey2=cy2;
    etype3=ctype3;
    ehp3=chp3;
    ex3=cx3;
    ey3=cy3;
    earnedXP=cXP;
}
/*
Enemy** battledata::retEnemies(){
    Enemy* Enemies[3];

    if(etype1=='h'){
            Enemies[0]=new Hunter(ehp1,ex1,ey1,true);
            Enemies[0]->setAlive(true);
    }else if(etype1='b'){
            Enemies[0]=new Bomber(ehp1,ex1,ey1);
            Enemies[0]->setAlive(true);
    }else if(etype1=='c'){
            Enemies[0]=new Cannon(ehp1,ex1,ey1);
            Enemies[0]->setAlive(true);
    }else if(etype1=='e'){
            Enemies[0]=new Enemy(ehp1,ex1,ey1);
            Enemies[0]->setAlive(true);
    }else{
            Enemies[0]=new Enemy(-1,-1,-1);
            Enemies[0]->setAlive(false);
    }
    if(etype2=='h'){
            Enemies[1]=new Hunter(ehp2,ex2,ey2,true);
            Enemies[1]->setAlive(true);
    }else if(etype1='b'){
            Enemies[1]=new Bomber(ehp2,ex2,ey2);
            Enemies[1]->setAlive(true);
    }else if(etype1=='c'){
            Enemies[1]=new Cannon(ehp2,ex2,ey2);
            Enemies[1]->setAlive(true);
    }else if(etype1=='e'){
            Enemies[1]=new Enemy(ehp2,ex2,ey2);
            Enemies[1]->setAlive(true);
    }else{
            Enemies[1]=new Enemy(-1,-1,-1);
            Enemies[1]->setAlive(false);
    }
    if(etype3=='h'){
            Enemies[2]=new Hunter(ehp3,ex3,ey3,true);
            Enemies[2]->setAlive(true);
    }else if(etype1='b'){
            Enemies[2]=new Bomber(ehp3,ex3,ey3);
            Enemies[2]->setAlive(true);
    }else if(etype1=='c'){
            Enemies[2]=new Cannon(ehp3,ex3,ey3);
            Enemies[2]->setAlive(true);
    }else if(etype1=='e'){
            Enemies[2]=new Enemy(ehp3,ex3,ey3);
            Enemies[2]->setAlive(true);
    }else{
            Enemies[2]=new Enemy(-1,-1,-1);
            Enemies[2]->setAlive(false);
    }

    return Enemies;

}
*/
