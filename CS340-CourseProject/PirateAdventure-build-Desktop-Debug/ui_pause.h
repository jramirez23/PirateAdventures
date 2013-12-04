/********************************************************************************
** Form generated from reading UI file 'pause.ui'
**
** Created: Tue Dec 3 20:23:14 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAUSE_H
#define UI_PAUSE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pause
{
public:
    QLabel *pirate;
    QProgressBar *progressBar;
    QLCDNumber *lcdNumber;
    QTabWidget *Weapons;
    QWidget *getAmmo;
    QPushButton *incSwordDamage;
    QPushButton *incGunDamage;
    QPushButton *incHookDamage;
    QPushButton *incBrokenGunDamage;
    QWidget *getHealth;
    QPushButton *restoreHealth;
    QPushButton *incHealth;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *resume;
    QSpacerItem *horizontalSpacer;
    QPushButton *exit;

    void setupUi(QDialog *Pause)
    {
        if (Pause->objectName().isEmpty())
            Pause->setObjectName(QString::fromUtf8("Pause"));
        Pause->resize(565, 407);
        Pause->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pirate = new QLabel(Pause);
        pirate->setObjectName(QString::fromUtf8("pirate"));
        pirate->setGeometry(QRect(10, 10, 201, 151));
        pirate->setPixmap(QPixmap(QString::fromUtf8("../images/pirate.gif")));
        pirate->setScaledContents(true);
        progressBar = new QProgressBar(Pause);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(270, 90, 118, 23));
        progressBar->setMaximum(22);
        progressBar->setValue(0);
        lcdNumber = new QLCDNumber(Pause);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(270, 50, 64, 23));
        lcdNumber->setFrameShadow(QFrame::Raised);
        lcdNumber->setDigitCount(3);
        lcdNumber->setSegmentStyle(QLCDNumber::Outline);
        lcdNumber->setProperty("intValue", QVariant(0));
        Weapons = new QTabWidget(Pause);
        Weapons->setObjectName(QString::fromUtf8("Weapons"));
        Weapons->setGeometry(QRect(10, 170, 551, 151));
        getAmmo = new QWidget();
        getAmmo->setObjectName(QString::fromUtf8("getAmmo"));
        incSwordDamage = new QPushButton(getAmmo);
        incSwordDamage->setObjectName(QString::fromUtf8("incSwordDamage"));
        incSwordDamage->setGeometry(QRect(14, 8, 241, 21));
        incSwordDamage->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:176.9, stop:0 rgba(194, 255, 255, 255));"));
        incGunDamage = new QPushButton(getAmmo);
        incGunDamage->setObjectName(QString::fromUtf8("incGunDamage"));
        incGunDamage->setGeometry(QRect(10, 60, 251, 23));
        incGunDamage->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:176.9, stop:0 rgba(194, 255, 255, 255));"));
        incHookDamage = new QPushButton(getAmmo);
        incHookDamage->setObjectName(QString::fromUtf8("incHookDamage"));
        incHookDamage->setGeometry(QRect(300, 10, 221, 23));
        incHookDamage->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:176.9, stop:0 rgba(194, 255, 255, 255));"));
        incBrokenGunDamage = new QPushButton(getAmmo);
        incBrokenGunDamage->setObjectName(QString::fromUtf8("incBrokenGunDamage"));
        incBrokenGunDamage->setGeometry(QRect(300, 60, 221, 23));
        incBrokenGunDamage->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:176.9, stop:0 rgba(194, 255, 255, 255));"));
        Weapons->addTab(getAmmo, QString());
        getHealth = new QWidget();
        getHealth->setObjectName(QString::fromUtf8("getHealth"));
        restoreHealth = new QPushButton(getHealth);
        restoreHealth->setObjectName(QString::fromUtf8("restoreHealth"));
        restoreHealth->setGeometry(QRect(80, 10, 381, 32));
        restoreHealth->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:176.9, stop:0 rgba(194, 255, 255, 255));"));
        incHealth = new QPushButton(getHealth);
        incHealth->setObjectName(QString::fromUtf8("incHealth"));
        incHealth->setGeometry(QRect(80, 60, 381, 32));
        incHealth->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:176.9, stop:0 rgba(194, 255, 255, 255));"));
        Weapons->addTab(getHealth, QString());
        layoutWidget = new QWidget(Pause);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 330, 289, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        resume = new QPushButton(layoutWidget);
        resume->setObjectName(QString::fromUtf8("resume"));

        horizontalLayout->addWidget(resume);

        horizontalSpacer = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        exit = new QPushButton(layoutWidget);
        exit->setObjectName(QString::fromUtf8("exit"));

        horizontalLayout->addWidget(exit);


        retranslateUi(Pause);

        Weapons->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Pause);
    } // setupUi

    void retranslateUi(QDialog *Pause)
    {
        Pause->setWindowTitle(QApplication::translate("Pause", "Dialog", 0, QApplication::UnicodeUTF8));
        pirate->setText(QString());
        incSwordDamage->setText(QApplication::translate("Pause", "Increase Sword Slasher Damage", 0, QApplication::UnicodeUTF8));
        incGunDamage->setText(QApplication::translate("Pause", "Increase Gun Damage", 0, QApplication::UnicodeUTF8));
        incHookDamage->setText(QApplication::translate("Pause", "Increase Hook Slash Damage", 0, QApplication::UnicodeUTF8));
        incBrokenGunDamage->setText(QApplication::translate("Pause", "Increase Broken Gun Damage", 0, QApplication::UnicodeUTF8));
        Weapons->setTabText(Weapons->indexOf(getAmmo), QApplication::translate("Pause", "Weapons", 0, QApplication::UnicodeUTF8));
        restoreHealth->setText(QApplication::translate("Pause", "Restore Health", 0, QApplication::UnicodeUTF8));
        incHealth->setText(QApplication::translate("Pause", "Increase Health", 0, QApplication::UnicodeUTF8));
        Weapons->setTabText(Weapons->indexOf(getHealth), QApplication::translate("Pause", "Health", 0, QApplication::UnicodeUTF8));
        resume->setText(QApplication::translate("Pause", "Resume", 0, QApplication::UnicodeUTF8));
        exit->setText(QApplication::translate("Pause", "Exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Pause: public Ui_Pause {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAUSE_H
