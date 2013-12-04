/********************************************************************************
** Form generated from reading UI file 'attackframe.ui'
**
** Created: Tue Dec 3 18:20:45 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTACKFRAME_H
#define UI_ATTACKFRAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_attackframe
{
public:

    void setupUi(QWidget *attackframe)
    {
        if (attackframe->objectName().isEmpty())
            attackframe->setObjectName(QString::fromUtf8("attackframe"));
        attackframe->resize(497, 389);

        retranslateUi(attackframe);

        QMetaObject::connectSlotsByName(attackframe);
    } // setupUi

    void retranslateUi(QWidget *attackframe)
    {
        attackframe->setWindowTitle(QApplication::translate("attackframe", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class attackframe: public Ui_attackframe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTACKFRAME_H
