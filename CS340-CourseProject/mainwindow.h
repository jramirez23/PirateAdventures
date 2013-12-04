<<<<<<< HEAD
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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
#include "battledata.h"

namespace Ui {
  class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT
  
public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

  
private slots:

  //void on_HeroHealthBar_valueChanged(int value);

  //void on_am1Button_released();

 // void on_enemyHealthBar_valueChanged(int value);
  //bool eventFilter(QObject *object, QEvent *e);
  void keyReleaseEvent(QKeyEvent *ke);

  //void on_expBar_valueChanged(int value);



private:
  Ui::MainWindow *ui;
  Character* Hero;
  Character* setUpHero();
  //Character* getHero();
  //Enemy* Enemies[3];
  Enemy* Enemies[3];
  //QLabel* Tiles[3][3];
  attackmove* mainAttack;
  attackList* aL;
  QLabel* Labels[3];
  bool inBattle;
  bool inOver;
  bool inStory;

  void paintEvent(QPaintEvent *);
  //QTimer* mainclock;
  //QTextBrowser*** Tiles;

  //void startBattle();
  void startBattle(char etype1, int ehp1, int ex1, int ey1,char etype2, int ehp2, int ex2, int ey2, char etype3, int ehp3, int ex3, int ey3);

  void doAttack();
  void updateArena();
  void startHeroTurn();
  void endHeroTurn();
  void startEnemyTurn();
  void endEnemyTurn();
  void moveCharLeft();
  void moveCharRight();
  void doSpecialAttack();
  void endBattle();
  bool on_enemyDead();
  void drawBattle(QPainter* g);
  void drawAttackList(QPainter* g);


protected:
   bool eventFilter(QObject *obj, QEvent *event);

};

#endif // MAINWINDOW_H
=======
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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
#include "battledata.h"

namespace Ui {
  class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT
  
public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

  
private slots:

  //void on_HeroHealthBar_valueChanged(int value);

  //void on_am1Button_released();

 // void on_enemyHealthBar_valueChanged(int value);
  //bool eventFilter(QObject *object, QEvent *e);
  void keyReleaseEvent(QKeyEvent *ke);

  //void on_expBar_valueChanged(int value);



private:
  Ui::MainWindow *ui;
  Character* Hero;
  Character* setUpHero();
  //Character* getHero();
  //Enemy* Enemies[3];
  Enemy* Enemies[3];
  //QLabel* Tiles[3][3];
  attackmove* mainAttack;
  attackList* aL;
  QLabel* Labels[3];
  bool inBattle;
  bool inOver;
  bool inStory;

  void paintEvent(QPaintEvent *);
  //QTimer* mainclock;
  //QTextBrowser*** Tiles;

  //void startBattle();
  void startBattle(char etype1, int ehp1, int ex1, int ey1,char etype2, int ehp2, int ex2, int ey2, char etype3, int ehp3, int ex3, int ey3);

  void doAttack();
  //void updateArena();
  void startHeroTurn();
  void endHeroTurn();
  void startEnemyTurn();
  void endEnemyTurn();
  void moveCharLeft();
  void moveCharRight();
  void doSpecialAttack();
  void endBattle();
  bool on_enemyDead();
  void drawOverWorld(QPainter* g);
  void drawBattle(QPainter* g);
  void drawAttackList(QPainter* g);
  void drawHP(QPainter* g);
  void lostBattle();

protected:
   bool eventFilter(QObject *obj, QEvent *event);

};

#endif // MAINWINDOW_H
>>>>>>> 87dd27675240c67b0ea9a10611c9d6c5bf4dfb0d
