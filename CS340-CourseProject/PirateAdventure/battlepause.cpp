#include "battlepause.h"
#include "ui_battlepause.h"
#include <QDialog>

BattlePause::BattlePause(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BattlePause)
{
    ui->setupUi(this);
}

BattlePause::~BattlePause()
{
    delete ui;
}

void BattlePause::on_pushButton_clicked()
{
    this->hide ();
}
