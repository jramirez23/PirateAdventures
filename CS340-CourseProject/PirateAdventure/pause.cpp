#include "pause.h"
#include "ui_pause.h"
#include "Character.h"


Pause::Pause(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pause)
{
    ui->setupUi(this);
    hero; //so not new attackframe?




}

Pause::~Pause()
{
    delete ui;
}

void Pause::on_resume_clicked()
{
    this->hide();
}

void Pause::on_exit_clicked()
{
    exit(0);
}
