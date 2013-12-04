#include "worldmap.h"
#include "ui_worldmap.h"

worldmap::worldmap(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::worldmap)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    QBrush redBrush(Qt::red);
    QBrush blueBrush(Qt::blue);
    QPen blackPen(Qt::black);

    blackpen.setWidth(6);

    ellipse = scene->addEllipse(10, 10, 100, 100, blackpen, redBrush);

}

worldmap::~worldmap()
{
    delete ui;
}
