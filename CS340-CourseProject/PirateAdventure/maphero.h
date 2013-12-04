#ifndef MAPHERO_H
#define MAPHERO_H

#include <QGraphicsItem>
#include "pause.h"
#include "mapenemy.h"
#include "attackframe.h"

class MapHero : public QGraphicsItem
{
public:
    MapHero(QGraphicsItem *parent = 0); // NULL
    //Pause *pause;
    MapEnemy *enemon;
    attackframe* battle;
    void pointToEnemy(MapEnemy *enemy);




protected:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;
    virtual void keyPressEvent(QKeyEvent *event);

private:
    int heroImage;
    Pause *pause;
};

#endif //MAPHERO_H
