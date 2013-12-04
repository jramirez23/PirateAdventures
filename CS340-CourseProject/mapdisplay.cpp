#include "mapdisplay.h"
#include "ui_mapdisplay.h"

mapdisplay::mapdisplay(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mapdisplay)
{
    ui->setupUi(this);
}

mapdisplay::~mapdisplay()
{
    delete ui;
}
