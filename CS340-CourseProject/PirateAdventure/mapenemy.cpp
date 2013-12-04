#include "mapenemy.h"
#include <QtGui>
#include <iostream>

MapEnemy::MapEnemy(QGraphicsItem *parent) : QGraphicsItem(parent)
{
    // setFlag(QGraphicsItem::ItemIsFocusable);
    enemyImage = 3;
}
MapEnemy::~MapEnemy()
{
    this->hide();
}

QRectF MapEnemy::boundingRect() const{
    return QRectF(600, 480, 30, 50);
}

void MapEnemy::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    widget;
    option;
    painter->drawPixmap(600, 480, 30, 50, QPixmap(":/images/bison"));
}

void MapEnemy::collisionEvent(){
    if ( (collidingItems().size() > 0))
    {
        this->hide();
    }
    update();
}
