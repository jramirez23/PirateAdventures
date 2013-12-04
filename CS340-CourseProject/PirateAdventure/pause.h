#ifndef PAUSE_H
#define PAUSE_H

#include <QDialog>
#include "Character.h"
#include <QtGui>
#include <QDialog>
#include <QtCore>
#include <QKeyEvent>
#include <QEvent>
#include "attackframe.h"

namespace Ui {
class Pause;
}

class Pause : public QDialog
{
    Q_OBJECT
    
public:
    explicit Pause(QWidget *parent = 0);
    ~Pause();
     Character* hero; //so not attackframe* hero?


    
private slots:
    void on_resume_clicked();

    void on_exit_clicked();

private:
    Ui::Pause *ui;
    //Getting pointer to character hero

};

#endif // PAUSE_H
