#ifndef ATTACKFRAME_H
#define ATTACKFRAME_H

#include <QDialog>
#include <QMainWindow>
#include "QKeyEvent"
#include "Character.h"
#include "Enemy.h"
#include "QTextBrowser"
#include "QLabel"
#include "attackmove.h"
#include "bomber.h"
#include "cannon.h"
#include "hunter.h"
#include "attacklist.h"
#include "QTimer"
//#include "battledata.h"
#include "animitems.h"

namespace Ui {
  class attackframe;
}

class attackframe : public QDialog
{
  Q_OBJECT

public:
  explicit attackframe(QWidget *parent = 0);
  ~attackframe();
    /**
      * @brief startBattle  sets up game to fight off enemies
      * @param etype1
      * @param ehp1
      * @param ex1
      * @param ey1
      * @param etype2
      * @param ehp2
      * @param ex2
      * @param ey2
      * @param etype3
      * @param ehp3
      * @param ex3
      * @param ey3
      */
     void startBattle(char etype1, int ehp1, int ex1, int ey1,char etype2, int ehp2, int ex2, int ey2, char etype3, int ehp3, int ex3, int ey3);
     /**
     * @brief getHero method is used to access Hero properties
     * @return pointer to hero
     */
    Character* getHero();
    int numPotions;
   // attackframe* ptr();//testing

private slots:

  //void on_HeroHealthBar_valueChanged(int value);

  //void on_am1Button_released();

 // void on_enemyHealthBar_valueChanged(int value);
  //bool eventFilter(QObject *object, QEvent *e);
  void keyReleaseEvent(QKeyEvent *ke);

  //void on_expBar_valueChanged(int value);



private:
  Ui::attackframe *ui;
  Character* Hero;
  Character* setUpHero();
  //Character* getHero();
  //Enemy* Enemies[3];
  Enemy* Enemies[3];
  //QLabel* Tiles[3][3];
  attackmove* mainAttack;
  attackList* aL;
  //QLabel* Labels[3];
  //bool hitTiles[3][3];
  bool inBattle;
  bool inOver;
  bool inStory;
  bool inPause;
  animItems* anim;

  void paintEvent(QPaintEvent *);
  //QTimer* mainclock;
  //QTextBrowser*** Tiles;

  //void startBattle();
  //void startBattle(char etype1, int ehp1, int ex1, int ey1,char etype2, int ehp2, int ex2, int ey2, char etype3, int ehp3, int ex3, int ey3);

  void doAttack();
  //void updateArena();
  void startHeroTurn();
  void endHeroTurn();
  void startEnemyTurn();
  void endEnemyTurn();
  void moveCharLeft();
  void moveCharRight();
  void restChar();
  void doSpecialAttack();
  void doMouseAttack(attackmove* am);
  void endBattle();
  bool on_enemyDead();
  void drawOverWorld(QPainter* g);
  void drawBattle(QPainter* g);
  void drawAttackList(QPainter* g);
  void drawHP(QPainter* g);
  void mousePressEvent(QMouseEvent *);
  void lostBattle();
  void updateAnimations();
  void drawHits(QPainter* g);
  void drawPause(QPainter* g);




protected:
   bool eventFilter(QObject *obj, QEvent *event);

};

#endif // MAINWINDOW_H
