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
     Character* hero;
      //attackframe* obj;




    
public slots:
    void on_resume_clicked();

    void on_exit_clicked();

    void on_progressBar_valueChanged(int value);

private:
    Ui::Pause *ui;






};

#endif // PAUSE_H
