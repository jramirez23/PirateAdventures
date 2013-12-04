#include "attackframe.h"
#include "ui_attackframe.h"
#include <QMainWindow>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "QEvent"
#include "QKeyEvent"
#include "QImage"
#include "QPainter"
#include "QButtonGroup"
//#in
#include "QLabel"
#include "QDebug"
#include <string.h>
#include "QTextBrowser"
#include "shotgun.h"
#include "xgun.h"
#include "QDir"
#include "brokengun.h"
#include "swordsman.h"
#include "brokenshot.h"
#include "skeleton.h"
#include "hookslash.h"
#include "swordslash.h"

attackframe::attackframe(QWidget *parent) :
    QDialog(parent),
    //QWidget(parent),
    ui(new Ui::attackframe)
{
    Hero=new Character(100,0,10,2);

    //mainAttack=new attackmove(10);
    mainAttack=new attackmove(10);
    aL=new attackList();
    aL->addMove(new shotgun(20));
    aL->addMove(new xgun(10));
    //aL->addMove(new attackmove(15));
    aL->addMove(new brokenshot(15));
    aL->addMove(new Hookslash(30));
    aL->addMove(new swordslash(30));
    //aL->addMove(new attackmove(15));
    //aL->addMove(new brokenshot(15));
    //aL->addMove(new Hookslash(30));
   //r aL->addMove(new swordslash(30));
    //connect(&parent,MainWindow::on_enemyDead(),&Enemies[1],Enemy::Died());
    numPotions=5;
    anim=new animItems();
    //std::cout<<"initialized characters\n";

    //before
    ui->setupUi(this);
    qApp->installEventFilter( this );
    //inOver=true;
    inBattle=false;
    inStory=false;
    inPause=false;

    startBattle('e',2,0,0,'h',2,1,1,'c',1,2,2);

    //startBattle('s',1,0,0,'k',1,1,1,'0',0,2,2);

    //startBattle();
    //paintEvent;
    repaint();

}

attackframe::~attackframe()
{
    delete ui;
}

//attackframe* attackframe:: ptr(){//testing
//    return this;
//}

//return a pointer to the charcter Hero
Character* attackframe::getHero(){
    return Hero;
}

void attackframe::startBattle(char etype1, int ehp1, int ex1, int ey1,char etype2, int ehp2, int ex2, int ey2, char etype3, int ehp3, int ex3, int ey3){
    inBattle=true;
    //inOver=false;
    inStory=false;
    //int i;
    aL->reset();
    anim->reset();

    //----------create enemies-------
    if(etype1=='h'){
            Enemies[0]=new Hunter(ehp1,ex1,ey1,true);
            Enemies[0]->setAlive(true);
    }else if(etype1=='b'){
            Enemies[0]=new Bomber(ehp1,ex1,ey1);
            Enemies[0]->setAlive(true);
    }else if(etype1=='s'){
        Enemies[0]=new swordsman(ehp1,ex1,ey1);
        Enemies[0]->setAlive(true);
    }else if(etype1=='k'){
        Enemies[0]=new Skeleton(ehp1,ex1,ey1);
        Enemies[0]->setAlive(true);
    }else if(etype1=='c'){
            Enemies[0]=new Cannon(ehp1,ex1,ey1);
            Enemies[0]->setAlive(true);
    }else if(etype1=='e'){
            Enemies[0]=new Enemy(ehp1,ex1,ey1);
            Enemies[0]->setAlive(true);
    }else if(etype1=='0'){
            Enemies[0]=new Enemy(-1,-1,-1);
            Enemies[0]->setAlive(false);
    }
    if(etype2=='h'){
            Enemies[1]=new Hunter(ehp2,ex2,ey2,true);
            Enemies[1]->setAlive(true);
    }else if(etype2=='b'){
            Enemies[1]=new Bomber(ehp2,ex2,ey2);
            Enemies[1]->setAlive(true);
    }else if(etype2=='c'){
            Enemies[1]=new Cannon(ehp2,ex2,ey2);
            Enemies[1]->setAlive(true);
    }else if(etype2=='e'){
            Enemies[1]=new Enemy(ehp2,ex2,ey2);
            Enemies[1]->setAlive(true);
    }else if(etype2=='s'){
        Enemies[1]=new swordsman(ehp2,ex2,ey2);
        Enemies[1]->setAlive(true);
    }else if(etype2=='k'){
        Enemies[1]=new Skeleton(ehp2,ex2,ey2);
        Enemies[1]->setAlive(true);
    }else if(etype2=='0'){
            Enemies[1]=new Enemy(-1,-1,-1);
            Enemies[1]->setAlive(false);
    }
    if(etype3=='h'){
            Enemies[2]=new Hunter(ehp3,ex3,ey3,true);
            Enemies[2]->setAlive(true);
    }else if(etype3=='b'){
            Enemies[2]=new Bomber(ehp3,ex3,ey3);
            Enemies[2]->setAlive(true);
    }else if(etype3=='s'){
        Enemies[2]=new swordsman(ehp3,ex3,ey3);
        Enemies[2]->setAlive(true);
    }else if(etype3=='k'){
        Enemies[2]=new Skeleton(ehp3,ex3,ey3);
        Enemies[2]->setAlive(true);
    }else if(etype3=='c'){
            Enemies[2]=new Cannon(ehp3,ex3,ey3);
            Enemies[2]->setAlive(true);
    }else if(etype3=='e'){
            Enemies[2]=new Enemy(ehp3,ex3,ey3);
            Enemies[2]->setAlive(true);
    }else if(etype3=='0'){
            Enemies[2]=new Enemy(-1,-1,-1);
            Enemies[2]->setAlive(false);
    }
    //---------------------end create enemies-------

    startHeroTurn();
}

void attackframe::paintEvent(QPaintEvent *){
    QPainter* g = new QPainter(this);
    if(inBattle){
        drawBattle(g);

    }/*else if(inOver){//end if in battle
        //draws over world
       // g->setBrush(Qt::BrushStyle->);
        drawOverWorld(g);

    }*/


    //g->end();
    g->end();
}
void attackframe::drawOverWorld(QPainter* g){
    QString goldt="Gold:";
    goldt.append(QString::number(Hero->getGold()));
    g->drawText(20,50,goldt);
    g->drawRect(100,100,100,100);
    g->drawText(110,140,"Click to");
    g->drawText(110,160,"Start Battle");
    g->drawRect(250,100,100,100);
    g->drawText(260,140,"Click to");
    g->drawText(260,160,"Start 2nd Battle");

}

void attackframe::drawBattle(QPainter* g){
    QString bgfn="images/bg.jpg";
    //QString sandfn="images/sand.png";
    QString sandfn="images/sandpanel.png";
    //QString redfn="images/red.png";
    //QString purpfn="images/cann.png";
    //QString herofn="images/pirate.gif";
    QString herofn="images/herobat.png";
    QImage bgpic(bgfn);
    QImage sandpic(sandfn);
    //QImage redpic(redfn);
    //QImage purppic(purpfn);
    QImage heropic(herofn);
    g->drawImage(0,0,bgpic);

    int x;
    int y;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            x=90+j*72;
            y=180-i*66;
            g->drawImage(x,y,sandpic);
            if(i==Enemies[0]->getY() && j==Enemies[0]->getX()){
               //Tiles[i][j]->setPixmap(QPixmap::fromImage(redpic));
                //g->drawImage(x,y,Enemies[0]->getPic());
                Enemies[0]->drawSelf(g,x,y);

              }else if(i==Enemies[1]->getY() && j==Enemies[1]->getX()){
               //Tiles[i][j]->setPixmap(QPixmap::fromImage(purppic));
                //g->drawImage(x,y,Enemies[1]->getPic());
                Enemies[1]->drawSelf(g,x,y);
              }else if(i==Enemies[2]->getY() && j==Enemies[2]->getX()){
             // Tiles[i][j]->setPixmap(QPixmap::fromImage(purppic));
                Enemies[2]->drawSelf(g,x,y);
                //g->drawImage(x,y,Enemies[2]->getPic());
            }
                       //else{
                 //Tiles[i][j]->setPixmap(QPixmap::fromImage(sandpic));
               // g->drawImage(x,y,sandpic);
              //}
          }
      }
    //rbgpic.
    /*
    g->drawImage(100,250,sandpic);
    g->drawImage(140,250,heropic);
    g->drawImage(180,250,sandpic);
    */

    g->drawImage(90,250,sandpic);
    g->drawImage(162,250,sandpic);
    g->drawImage(234,250,sandpic);
    if(Hero->getPanel()==0){
        g->drawImage(100,230,heropic);
    }else if(Hero->getPanel()==1){

        g->drawImage(172,230,heropic);

    }else if(Hero->getPanel()==2){

        g->drawImage(244,230,heropic);
    }
    //g->fil
    /*QBrush grey;
    grey.setColor(Qt::red);
    //grey.st
    g->fillRect(300,0,200,500,grey.style());
    */
    drawAttackList(g);
    drawHP(g);
    drawHits(g);
}

void attackframe::drawPause (QPainter *g){
    g->fillRect (100,50,300,250,Qt::white);
    g->drawRect (100,50,300,250);
    g->drawText (110,70,"Pause Menu");

    g->fillRect (190,190,90,30,Qt::gray);
    g->drawRect (190,190,90,30);
    QString potText="Use Potion: ";
    potText.append (QString::number (numPotions));

    g->drawText (192,210,potText);
    //draw a rectangle with an X to exit with mouse
    g->drawRect(380, 60, 10, 10);
    g->drawLine(380, 60, 390, 70);
    g->drawLine(380,70,390,60);


}



void attackframe::drawHits(QPainter* g){
    //anim->setHit(1,0,1);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){

            int x=90+j*72;
            int y=180-i*66;
            if(anim->getHit(i,j)==1){
                g->drawImage(x,y,QImage("images/xhit.png"));
            }
        }
    }
}

void attackframe::drawHP(QPainter* g){
    //ui->HeroHealthBar->hide();

    g->drawRect(10,10,100,20);
    g->fillRect(11,11,99,19,Qt::white);
    int fillamt=99*Hero->getHP()/Hero->getmaxHP();

    g->fillRect(11,11,fillamt,19,Qt::red);
    QString hptext=QString::number(Hero->getHP());
    hptext.append("/");
    hptext.append(QString::number(Hero->getmaxHP()));

    g->drawText(11,20,hptext);
}

void attackframe::drawAttackList(QPainter* g){
   // QBrush grey;
    //grey.setColor(Qt::red);
        //grey.st
    g->fillRect(325,0,200,500,Qt::gray);

    int i=0;
    for(i=0;i<5;i++){
        //g->fillRect();
        if(aL->isUsedAt(i)){
             g->fillRect(340,i*30,140,30,Qt::red);
        }
        g->drawRect(340,i*30,140,30);
        if(i<aL->getFull()){

            g->drawImage(340,i*30,aL->getAttackAt(i)->getImage());
            g->drawText(362,30+i*30,aL->getAttackAt(i)->getString());
        }else{
            g->drawText(362,30+i*30,"None");
        }
    }
    g->fillRect(340,270,140,30,Qt::yellow);
    g->drawRect(340,270,140,30);
    g->drawText(362,300,"Shoot!");
    g->fillRect(340,300,140,30,Qt::green);
    g->drawRect(340,300,140,30);
    g->drawText(362,330,"Rest");
}

void attackframe::startHeroTurn(){
Hero->setCanMove(true);
  Hero->setTurn(true);
}

void attackframe::endHeroTurn(){
  if(on_enemyDead()){
     return;
    }
   Hero->setCanMove(false);
  Hero->setTurn(false);
  //updateArena();
  repaint();
  //ui->leftButton->setDisabled(true);
  //ui->leftButton->setDisabled(true);
  startEnemyTurn();

}

void attackframe::startEnemyTurn(){
  //ui->gDisplay->append("Enemyturn ");

  //connect(mainclock, SIGNAL(timeout()), this, SLOT(update()));
  //mainclock->start(1000);

  //ui->gDisplay->append(QString::number(Enemies[0]->getHP()));
  //ui->gDisplay->append(QString::number(Enemies[1]->getHP()));

  if(Enemies[0]->getAlive()==true){
    Enemies[0]->doTurn(Hero);
    }

  if(Enemies[1]->getAlive()==true){
      Enemies[1]->doTurn(Hero);
    }
  if(Enemies[2]->getAlive()==true){
      Enemies[2]->doTurn(Hero);
    }
 // updateArena();
  //Enemies[2]->doTurn(Hero);
 //updateArena();
  endEnemyTurn();


}

void attackframe::endEnemyTurn(){
  //updateArena();
  repaint();
  if(Hero->getHP()<=0){
      lostBattle();
      return;
  }
  startHeroTurn();
}
void attackframe::lostBattle(){

    //anything else for losing a battle goes here
    endBattle();
    Hero->setHP(Hero->getmaxHP());
    repaint();

}









void attackframe::restChar(){
    anim->reset();
    Hero->getRestored(10);
    //endEnemyTurn();
}
void attackframe::moveCharLeft(){
  if(Hero->getCanMove() && Hero->isTurn()){
      anim->reset();
      if(Hero->getPanel()==2){

          Hero->setPanel(1);
          Hero->setCanMove(false);
          //getHero()->setTurn(false);
          //endHeroTurn();
        }else if(Hero->getPanel()==1){
          Hero->setPanel(0);
          Hero->setCanMove(false);
          //getHero()->setTurn(false);
          //endHeroTurn();
        }
    }

}

void attackframe::moveCharRight(){
  if(Hero->getCanMove()&& Hero->isTurn()){
      anim->reset();
      if(Hero->getPanel()==0){
          Hero->setPanel(1);
          Hero->setCanMove(false);
          //getHero()->setTurn(false);
          //endHeroTurn();
        }else if(Hero->getPanel()==1){
          Hero->setPanel(2);
          Hero->setCanMove(false);
          //getHero()->setTurn(false);
          //endHeroTurn();
        }
    }
}

void attackframe::keyReleaseEvent(QKeyEvent *ke){
   //std::cout << ke->key() << "\n";
    if(inBattle){
   if(ke->key()==16777236){
       moveCharRight();
       endHeroTurn();
       //updateArena();
       repaint();
       //std::cout<<"right\n";
     }else if(ke->key()==16777234){
       //std::cout<<"left\n";
       moveCharLeft();
       endHeroTurn();
       //updateArena();
       repaint();
     }else if(ke->key()==32){
       if(Hero->isTurn()){
          doAttack();
          endHeroTurn();
          //updateArena();
          repaint();
         }
     }else if(ke->key()==90){
       if(Hero->isTurn()){
          doSpecialAttack();
          //endHeroTurn();
          //updateArena();
          //repaint();
         }
     }else if(ke->key()==88){
              //if(Hero->isTurn()){
       restChar();
                 endHeroTurn();
                 //endHeroTurn();
                 //updateArena();
                 //repaint();


     }
    }/*else if(inOver){
        if(ke->key()==32){
            //startBattle();
            repaint();
        }

    }*/

}
void attackframe::mousePressEvent(QMouseEvent* event){


    //362,30+i*30
    if(inBattle && !inPause){
        //(event->type()==QEvent::MouseButtonRelease ||event->type()==QEvent::MouseButtonPress ||event->type()==QEvent::MouseButtonDblClick)
        int qx=((QMouseEvent*)event)->x();
        int qy=((QMouseEvent*)event)->y();
        if(qx>302 && qx<450){
            int qmove=(qy)/30;
            //std::string::

            //std::cout<< std::to_string(qmove) <<std::endl;
                attackmove* nextmove= aL->takeMoveAt(qmove);
                doMouseAttack(nextmove);
            //repaint();
                if(qmove==9){
                    doAttack();
                    endHeroTurn();
                }else if(qmove==10){
                    restChar();
                    endHeroTurn();
                }
        }
    }
    else if(inPause&&inBattle){
            int qx=((QMouseEvent*)event)->x();
            int qy=((QMouseEvent*)event)->y();
            if(qx>190 && qx < 280 && qy >190 && qy<220 && numPotions>0){

                Hero->getRestored (20);
                numPotions--;
            }
            //have mouse event work here.
            if(qx>380 && qx < 390 && qy >60 && qy<70){

               inPause=false;
            }
        }


     repaint();
}
bool attackframe::eventFilter(QObject *obj, QEvent *event)
{



    return QDialog::eventFilter(obj, event);
}
void attackframe::doAttack(){

  int hpanel=Hero->getPanel();
  mainAttack->doAttack(hpanel,Enemies,anim);

  /*
  Enemy *closest=NULL;
  for(int i=0;i<3;i++){
      if(Enemies[i]->getX()==hpanel){
          //if(closest!=NULL){
            //  if(closest->getY()<Enemies[i]->getY()){
              //    closest=Enemies[i];
                //}
            //}else{
             // closest=Enemies[i];
           // }
            //
          closest=Enemies[i];
        }
    }
  if(closest==NULL){
      return;
    }else{
      closest->getDamaged(10);
    }
    */



  }
void attackframe::doSpecialAttack(){
  attackmove* am=aL->getAttack();
  if(am!=NULL){
      am->doAttack(Hero->getPanel(),Enemies,anim);
      endHeroTurn();
      //updateArena();
      repaint();

    }
}
void attackframe::doMouseAttack(attackmove* am){
  //attackmove* am=aL->getAttack();
  if(am!=NULL){
      am->doAttack(Hero->getPanel(),Enemies,anim);
      endHeroTurn();
      //updateArena();
      repaint();

    }
}

bool attackframe::on_enemyDead(){
  //std::cout<<"onenemydead\n";
  bool alldead=true;
  int i;
  for(i=0;i<3;i++){
      if(Enemies[i]->getAlive()==true){
          alldead=false;
        }
    }
  if(alldead){
      endBattle();
    }
  return alldead;

}

void attackframe::endBattle(){
  //std::cout<<"onendbattle\n";
  //int i;
 // int j;
  /*
  for(i=0;i<3;i++){
      for(j=0;j<3;j++){
          Tiles[i][j]->setVisible(false);
          Tiles[i][j]->setEnabled(false);
        }
    }
  ui->HeroHealthBar->setVisible(false);
  ui->panelH0->setVisible(false);
  ui->panelH1->setVisible(false);
  ui->panelH2->setVisible(false);
  ui->panel1->setVisible(false);
  ui->panel2->setVisible(false);
  ui->endButton->setVisible(false);
  ui->endButton->setEnabled(false);
  ui->attButton->setVisible(false);
  ui->attButton->setEnabled(false);
  ui->leftButton->setVisible(false);
  ui->leftButton->setEnabled(false);
  ui->rightButton->setVisible(false);
  ui->rightButton->setEnabled(false);
  */

  //ui->gDisplay->setVisible(true);
  //ui->gDisplay->setText("You Win!\nGained n XP");
    int amtg=0;

    for(int i=0;i<3;i++){

      //Labels[i]->setVisible(false);
      amtg+=Enemies[i]->getmaxHP();
      //amtg+=Enemies[i]->getDamage();

    }
    if(Hero->getHP()>0){
    Hero->incGold(amtg);
    }
      //ui->HeroHealthBar->setVisible(false);

  inBattle=false;
  //inOver=true;
  inStory=false;
  QDialog::hide();
}


