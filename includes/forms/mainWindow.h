/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCustomer;
    QAction *actiondeleteById;
    QAction *actiongetAll;
    QAction *actiongetOne;
    QAction *actionadd;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuEntity;
    QMenu *menuMethod;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMouseTracking(false);
        actionCustomer = new QAction(MainWindow);
        actionCustomer->setObjectName(QString::fromUtf8("actionCustomer"));
        actiondeleteById = new QAction(MainWindow);
        actiondeleteById->setObjectName(QString::fromUtf8("actiondeleteById"));
        actiongetAll = new QAction(MainWindow);
        actiongetAll->setObjectName(QString::fromUtf8("actiongetAll"));
        actiongetOne = new QAction(MainWindow);
        actiongetOne->setObjectName(QString::fromUtf8("actiongetOne"));
        actionadd = new QAction(MainWindow);
        actionadd->setObjectName(QString::fromUtf8("actionadd"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuEntity = new QMenu(menubar);
        menuEntity->setObjectName(QString::fromUtf8("menuEntity"));
        menuMethod = new QMenu(menubar);
        menuMethod->setObjectName(QString::fromUtf8("menuMethod"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuEntity->menuAction());
        menubar->addAction(menuMethod->menuAction());
        menuEntity->addAction(actionCustomer);
        menuMethod->addSeparator();
        menuMethod->addAction(actiondeleteById);
        menuMethod->addAction(actiongetAll);
        menuMethod->addAction(actiongetOne);
        menuMethod->addAction(actionadd);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionCustomer->setText(QApplication::translate("MainWindow", "Customer", nullptr));
        actiondeleteById->setText(QApplication::translate("MainWindow", "deleteById", nullptr));
        actiongetAll->setText(QApplication::translate("MainWindow", "getAll", nullptr));
        actiongetOne->setText(QApplication::translate("MainWindow", "getOne", nullptr));
        actionadd->setText(QApplication::translate("MainWindow", "add", nullptr));
        menuEntity->setTitle(QApplication::translate("MainWindow", "Entity", nullptr));
        menuMethod->setTitle(QApplication::translate("MainWindow", "Method", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAINWINDOW_H
