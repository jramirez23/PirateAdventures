/********************************************************************************
** Form generated from reading UI file 'attackframe.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTACKFRAME_H
#define UI_ATTACKFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_attackframe
{
public:

    void setupUi(QWidget *attackframe)
    {
        if (attackframe->objectName().isEmpty())
            attackframe->setObjectName(QStringLiteral("attackframe"));
        attackframe->resize(497, 389);

        retranslateUi(attackframe);

        QMetaObject::connectSlotsByName(attackframe);
    } // setupUi

    void retranslateUi(QWidget *attackframe)
    {
        attackframe->setWindowTitle(QApplication::translate("attackframe", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class attackframe: public Ui_attackframe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTACKFRAME_H
