#ifndef WORLDMAP_H
#define WORLDMAP_H

#include <QDialog>
#include <QtCore>
#include <QtGui>


namespace Ui {
class worldmap;
}

class worldmap : public QDialog
{
    Q_OBJECT

public:
    explicit worldmap(QWidget *parent = 0);
    ~worldmap();

private:
    Ui::worldmap *ui;
    QGraphicsScene *scene;
    QGraphicsEllipseItem *ellipse;
    QGraphicsRectItem *rectangle;
};

#endif // WORLDMAP_H
