#ifndef MAPENEMY_H
#define MAPENEMY_H

#include <QGraphicsItem>

class MapEnemy : public QGraphicsItem
{
public:
    MapEnemy(QGraphicsItem *parent = NULL);
    ~MapEnemy();
protected:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;


    virtual void collisionEvent();

private:
    int enemyImage;
};

#endif //MAPENEMY_H
