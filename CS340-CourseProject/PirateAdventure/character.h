#ifndef Character_H
#define Character_H
//#include "attackmove.h"
//#include "Enemy.h"

class Character
{\
private:
  int currentHP;
  int maxHP;
  int exp;
  //int nextexp;
  //int level;
  int attDam;
  bool canmove;
  int heropanel;
  bool inTurn;
  int gold;
 // attackmove* mainAttack;


public:

  Character(int startHP, int sexp, int cdam, int cpanel);
  ~Character();
   bool getDamaged(int damage);
   void getRestored(int recovery);
   int getHP();
   int getexp();
   int getmaxHP();
   //int getlevel();
   //int getnextexp();
   void setHP(int nhp);
   void setexp(int nexp);
   void setmaxHP(int nmaxhp);
   //void setlevel(int nlevel);
   //void setnextexp(int nnextexp);
   void setCanMove(bool cmove);
   bool getCanMove();
   int getPanel();
   void setPanel(int cpanel);
   void setTurn(bool cturn);
   bool isTurn();
   void setDam(int cdam);
   int getDam();
   int getGold();
   void incGold(int amt);
   //attackmove* getAttack();

};

#endif // Character_H
