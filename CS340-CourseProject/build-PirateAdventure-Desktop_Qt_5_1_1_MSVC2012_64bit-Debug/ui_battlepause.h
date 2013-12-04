/********************************************************************************
** Form generated from reading UI file 'battlepause.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATTLEPAUSE_H
#define UI_BATTLEPAUSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

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
            BattlePause->setObjectName(QStringLiteral("BattlePause"));
        BattlePause->resize(800, 600);
        BattlePause->setMaximumSize(QSize(800, 600));
        BattlePause->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        centralwidget = new QWidget(BattlePause);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Pirate = new QLabel(centralwidget);
        Pirate->setObjectName(QStringLiteral("Pirate"));
        Pirate->setGeometry(QRect(10, 10, 181, 201));
        Pirate->setPixmap(QPixmap(QString::fromUtf8("../images/piratebat.png")));
        Pirate->setScaledContents(true);
        Pirate->setMargin(-1);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 290, 110, 32));
        pushButton->setStyleSheet(QStringLiteral("color: qconicalgradient(cx:0.5, cy:0.5, angle:176.9, stop:0 rgba(255, 255, 255, 255));"));

        retranslateUi(BattlePause);

        QMetaObject::connectSlotsByName(BattlePause);
    } // setupUi

    void retranslateUi(QDialog *BattlePause)
    {
        BattlePause->setWindowTitle(QApplication::translate("BattlePause", "MainWindow", 0));
        Pirate->setText(QString());
        pushButton->setText(QApplication::translate("BattlePause", "Resume", 0));
    } // retranslateUi

};

namespace Ui {
    class BattlePause: public Ui_BattlePause {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATTLEPAUSE_H
