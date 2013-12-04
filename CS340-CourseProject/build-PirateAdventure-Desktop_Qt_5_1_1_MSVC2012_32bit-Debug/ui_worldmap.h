/********************************************************************************
** Form generated from reading UI file 'worldmap.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORLDMAP_H
#define UI_WORLDMAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_worldmap
{
public:
    QGraphicsView *graphicsView;
    QPushButton *pushButton;

    void setupUi(QDialog *worldmap)
    {
        if (worldmap->objectName().isEmpty())
            worldmap->setObjectName(QStringLiteral("worldmap"));
        worldmap->resize(640, 575);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(worldmap->sizePolicy().hasHeightForWidth());
        worldmap->setSizePolicy(sizePolicy);
        worldmap->setMinimumSize(QSize(640, 575));
        worldmap->setMaximumSize(QSize(640, 575));
        graphicsView = new QGraphicsView(worldmap);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setEnabled(true);
        graphicsView->setGeometry(QRect(0, 0, 640, 575));
        sizePolicy.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy);
        graphicsView->setMinimumSize(QSize(640, 575));
        graphicsView->setMaximumSize(QSize(640, 575));
        graphicsView->setAutoFillBackground(false);
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/images/untitled2.png);"));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setSceneRect(QRectF(0, 0, 490, 390));
        graphicsView->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        graphicsView->setResizeAnchor(QGraphicsView::AnchorViewCenter);
        pushButton = new QPushButton(worldmap);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 550, 31, 21));

        retranslateUi(worldmap);

        QMetaObject::connectSlotsByName(worldmap);
    } // setupUi

    void retranslateUi(QDialog *worldmap)
    {
        worldmap->setWindowTitle(QApplication::translate("worldmap", "Dialog", 0));
        pushButton->setText(QApplication::translate("worldmap", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class worldmap: public Ui_worldmap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORLDMAP_H
