/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created: Mon Dec 2 15:41:27 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Store
{
public:
    QLabel *label;

    void setupUi(QWidget *Store)
    {
        if (Store->objectName().isEmpty())
            Store->setObjectName(QString::fromUtf8("Store"));
        Store->resize(570, 414);
        Store->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:176.9, stop:0 rgba(118, 213, 219, 255));\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        label = new QLabel(Store);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 471, 31));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setIndent(84);

        retranslateUi(Store);

        QMetaObject::connectSlotsByName(Store);
    } // setupUi

    void retranslateUi(QWidget *Store)
    {
        Store->setWindowTitle(QApplication::translate("Store", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Store", "Welcome to the Pirate Store", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Store: public Ui_Store {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
