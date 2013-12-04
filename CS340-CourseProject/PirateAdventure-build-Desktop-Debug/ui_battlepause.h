/********************************************************************************
** Form generated from reading UI file 'battlepause.ui'
**
** Created: Tue Dec 3 18:20:45 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATTLEPAUSE_H
#define UI_BATTLEPAUSE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BattlePause
{
public:
    QWidget *centralwidget;
    QLabel *Pirate;
    QPushButton *pushButton;

    void setupUi(QDialog *BattlePause)
    {
        if (BattlePause->objectName().isEmpty())
            BattlePause->setObjectName(QString::fromUtf8("BattlePause"));
        BattlePause->resize(800, 600);
        BattlePause->setMaximumSize(QSize(800, 600));
        BattlePause->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        centralwidget = new QWidget(BattlePause);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Pirate = new QLabel(centralwidget);
        Pirate->setObjectName(QString::fromUtf8("Pirate"));
        Pirate->setGeometry(QRect(10, 10, 181, 201));
        Pirate->setPixmap(QPixmap(QString::fromUtf8("../images/piratebat.png")));
        Pirate->setScaledContents(true);
        Pirate->setMargin(-1);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(90, 290, 110, 32));
        pushButton->setStyleSheet(QString::fromUtf8("color: qconicalgradient(cx:0.5, cy:0.5, angle:176.9, stop:0 rgba(255, 255, 255, 255));"));

        retranslateUi(BattlePause);

        QMetaObject::connectSlotsByName(BattlePause);
    } // setupUi

    void retranslateUi(QDialog *BattlePause)
    {
        BattlePause->setWindowTitle(QApplication::translate("BattlePause", "MainWindow", 0, QApplication::UnicodeUTF8));
        Pirate->setText(QString());
        pushButton->setText(QApplication::translate("BattlePause", "Resume", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BattlePause: public Ui_BattlePause {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTLEPAUSE_H
