#include "maphero.h"
#include "worldmap.h"
#include <QtGui>
#include <iostream>

MapHero::MapHero(QGraphicsItem *parent) : QGraphicsItem(parent)
{
    setFlag(QGraphicsItem::ItemIsFocusable);
    pause = new Pause();
    heroImage = 3;
    battle= new attackframe();
    pause->hero=battle->getHero ();
    pause->on_progressBar_valueChanged (pause->hero->getHP());

}


void MapHero::pointToEnemy(MapEnemy *enemy)
{
    enemon = enemy;
}

QRectF MapHero::boundingRect() const{
    return QRectF(0, 520, 15, 24);
}

void MapHero::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    option;
    widget;
    switch(  heroImage )
    {
        case 0:
            painter->drawPixmap(0, 520, 15, 24, QPixmap(":/images/Image4_8.gif"));
            break;
        case 1:
            painter->drawPixmap(0, 520, 15, 24, QPixmap(":/images/Image7_3"));
            break;
        case 2:
            painter->drawPixmap(0, 520, 15, 24, QPixmap(":/images/Image6_2.gif"));
            break;
        default:
            painter->drawPixmap(0, 520, 15, 24, QPixmap(":/images/Image5_4.gif"));
            break;
    }
}

void MapHero::keyPressEvent(QKeyEvent *event){
    double cSize;
    switch(  event->key() ) {
    case Qt::Key_Right:
        moveBy(9, 0);
        heroImage = 3;
        if ( (cSize = collidingItems().size()) > 0){
            std::cout << cSize;
            moveBy(-9, 0);
            heroImage = 1;
        }
        break;
    case Qt::Key_Left:
        moveBy(-9, 0);
        heroImage = 1;
        if ( (collidingItems().size() > 0)){
            moveBy(9, 0);
            heroImage = 3;
        }
        break;
    case Qt::Key_Up:
        moveBy(0, -9);
        heroImage = 2;
        if ( (collidingItems().size() > 0)){
            moveBy(0, 9);
            heroImage = 0;
        }
        break;
    case Qt::Key_Down:
        moveBy(0, 9);
        heroImage = 0;
        if ( (collidingItems().size() > 0)){
            moveBy(0, -9);
            heroImage = 2;
        }
        break;
    case Qt::Key_P:
        pause->setModal(true);
        pause->exec();
        break;
    case Qt::Key_B:
        std::cout<<"b";
        //battle->setModal(true);
        battle->setModal(true);
        battle->startBattle('e',2,0,0,'h',2,1,1,'c',1,2,2);
        //battle->setGeometry(0,0,300,400);
        battle->exec();
        break;
    case Qt::Key_L:
        enemon->hide();
        break;
    default:
        break;
    }
        update();
}
