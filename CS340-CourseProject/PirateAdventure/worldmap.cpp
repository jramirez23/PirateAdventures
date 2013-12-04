#include "worldmap.h"
#include "ui_worldmap.h"

worldmap::worldmap(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::worldmap)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(this);
    scene->setBackgroundBrush(Qt::transparent);

    ui->graphicsView->setScene(scene);

    hero = new MapHero;
    enemy = new MapEnemy;
    scene->addItem(hero);
    scene->addItem(enemy);
    hero->setFocus();
    QBrush unBrush(Qt::red);
    QPen unPen(Qt::transparent);
    unPen.setWidth(1);
    hero->pointToEnemy(enemy);

    scene->addRect(0, 0, 32, 510, unPen, unBrush);
    scene->addRect(0, 0, 638, 30, unPen, unBrush);
    scene->addRect(0, 482, 126, 28, unPen, unBrush);
    scene->addRect(0, 546, 638, 30, unPen, unBrush);
    scene->addRect(0, 482, 126, 28, unPen, unBrush);
    scene->addRect(0, 546, 638, 30, unPen, unBrush);
    scene->addRect(0, 482, 126, 26, unPen, unBrush);
    scene->addRect(130, 418, 26, 60, unPen, unBrush);
    scene->addRect(610, 0, 26, 444, unPen, unBrush);
    scene->addRect(514, 418, 28, 126, unPen, unBrush);
    scene->addRect(66, 32, 218, 28, unPen, unBrush);
    scene->addRect(386, 32, 156, 28, unPen, unBrush);
    scene->addRect(578, 32, 28, 26, unPen, unBrush);
    scene->addRect(130, 98, 316, 28, unPen, unBrush);
    scene->addRect(32, 98, 30, 28, unPen, unBrush);
    scene->addRect(322, 66, 28, 30, unPen, unBrush);
    scene->addRect(482, 98, 60, 28, unPen, unBrush);
    scene->addRect(98, 130, 28, 28, unPen, unBrush);
    scene->addRect(450, 130, 28, 28, unPen, unBrush);
    scene->addRect(546, 130, 28, 60, unPen, unBrush);
    scene->addRect(130, 162, 28, 60, unPen, unBrush);
    scene->addRect(194, 162, 28, 28, unPen, unBrush);
    scene->addRect(322, 162, 92, 28, unPen, unBrush);
    scene->addRect(226, 194, 28, 28, unPen, unBrush);
    scene->addRect(386, 194, 60, 28, unPen, unBrush);
    scene->addRect(482, 194, 60, 28, unPen, unBrush);
    scene->addRect(98, 226, 28, 28, unPen, unBrush);
    scene->addRect(258, 226, 28, 92, unPen, unBrush);
    scene->addRect(290, 194, 28, 28, unPen, unBrush);
    scene->addRect(66, 258, 28, 124, unPen, unBrush);
    scene->addRect(98, 226, 28, 28, unPen, unBrush);
    scene->addRect(258, 226, 28, 92, unPen, unBrush);
    scene->addRect(98, 386, 28, 28, unPen, unBrush);
    scene->addRect(194, 258, 28, 28, unPen, unBrush);
    scene->addRect(194, 354, 28, 28, unPen, unBrush);
    scene->addRect(226, 386, 28, 28, unPen, unBrush);
    scene->addRect(258, 354, 28, 28, unPen, unBrush);
    scene->addRect(258, 418, 28, 28, unPen, unBrush);
    scene->addRect(162, 290, 28, 60, unPen, unBrush);
    scene->addRect(354, 226, 28, 28, unPen, unBrush);
    scene->addRect(386, 258, 60, 28, unPen, unBrush);
    scene->addRect(514, 258, 28, 28, unPen, unBrush);
    scene->addRect(322, 290, 60, 28, unPen, unBrush);
    scene->addRect(450, 290, 60, 28, unPen, unBrush);
    scene->addRect(546, 290, 28, 60, unPen, unBrush);
    scene->addRect(322, 354, 28, 28, unPen, unBrush);
    scene->addRect(386, 354, 28, 28, unPen, unBrush);
    scene->addRect(514, 354, 28, 28, unPen, unBrush);
    scene->addRect(354, 386, 28, 28, unPen, unBrush);
    scene->addRect(418, 386, 28, 28, unPen, unBrush);
    scene->addRect(578, 418, 30, 28, unPen, unBrush);
    scene->addRect(482, 386, 28, 28, unPen, unBrush);
    scene->addRect(290, 450, 188, 28, unPen, unBrush);
    scene->addRect(290, 514, 188, 28, unPen, unBrush);
    scene->addRect(194, 450, 28, 60, unPen, unBrush);
    scene->addRect(226, 514, 28, 28, unPen, unBrush);
}

worldmap::~worldmap()
{
    delete ui;
    delete hero;
}

void worldmap::on_pushButton_clicked()
{
    this->hide();
}

/*
void worldmap::keyPressEvent(QKeyEvent *event){
    switch(  event->key() ) {
    case Qt::Key_P:
        pause->setModal(true);
        pause->show();
        break;
    case Qt::Key_L:
        enemy->~MapEnemy();
        delete enemy;
        break;
    }
        update();
}
*/
