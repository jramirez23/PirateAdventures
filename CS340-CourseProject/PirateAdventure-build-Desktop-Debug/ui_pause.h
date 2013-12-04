/********************************************************************************
** Form generated from reading UI file 'pause.ui'
**
** Created: Wed Dec 4 04:23:11 2013
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
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pause
{
public:
    QLabel *pirate;
    QProgressBar *progressBar;
    QLCDNumber *lcdNumber;
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
        progressBar->setMaximum(100);
        progressBar->setValue(50);
        progressBar->setTextVisible(true);
        lcdNumber = new QLCDNumber(Pause);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(270, 50, 64, 23));
        lcdNumber->setFrameShadow(QFrame::Raised);
        lcdNumber->setDigitCount(3);
        lcdNumber->setSegmentStyle(QLCDNumber::Outline);
        lcdNumber->setProperty("intValue", QVariant(50));
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
        QObject::connect(progressBar, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));

        QMetaObject::connectSlotsByName(Pause);
    } // setupUi

    void retranslateUi(QDialog *Pause)
    {
        Pause->setWindowTitle(QApplication::translate("Pause", "Dialog", 0, QApplication::UnicodeUTF8));
        pirate->setText(QString());
        progressBar->setFormat(QApplication::translate("Pause", "%v%", 0, QApplication::UnicodeUTF8));
        resume->setText(QApplication::translate("Pause", "Resume", 0, QApplication::UnicodeUTF8));
        exit->setText(QApplication::translate("Pause", "Exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Pause: public Ui_Pause {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAUSE_H
