#ifndef WORLDMAP_H
#define WORLDMAP_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QGraphicsView>
#include <QGraphicsItem>

#include "maphero.h"
#include "mapenemy.h"
#include "pause.h"

namespace Ui {
class worldmap;
}

class worldmap : public QDialog
{
    Q_OBJECT

public:
    explicit worldmap(QWidget *parent = 0);
    ~worldmap();
    // Pause *pause;

private slots:
    void on_pushButton_clicked();
    // virtual void keyPressEvent(QKeyEvent *event);

private:
    Ui::worldmap *ui;
    QGraphicsScene *scene;
    MapHero *hero;
    MapEnemy *enemy;
    Pause *pause;
};

#endif // WORLDMAP_H
