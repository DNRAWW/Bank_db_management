/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
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
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *allEntityTable;
    QPushButton *getAllButton;
    QWidget *tab_2;
    QWidget *tab_3;
    QWidget *tab_4;
    QMenuBar *menubar;
    QMenu *menuEntity;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(905, 653);
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
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 901, 601));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        allEntityTable = new QTableWidget(tab);
        if (allEntityTable->columnCount() < 8)
            allEntityTable->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        allEntityTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        allEntityTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        allEntityTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        allEntityTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        allEntityTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        allEntityTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        allEntityTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        allEntityTable->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        allEntityTable->setObjectName(QString::fromUtf8("allEntityTable"));
        allEntityTable->setGeometry(QRect(0, 30, 901, 541));
        allEntityTable->setLineWidth(1);
        allEntityTable->setGridStyle(Qt::SolidLine);
        allEntityTable->setSortingEnabled(true);
        allEntityTable->horizontalHeader()->setDefaultSectionSize(112);
        getAllButton = new QPushButton(tab);
        getAllButton->setObjectName(QString::fromUtf8("getAllButton"));
        getAllButton->setGeometry(QRect(0, 0, 901, 31));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 905, 22));
        menuEntity = new QMenu(menubar);
        menuEntity->setObjectName(QString::fromUtf8("menuEntity"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuEntity->menuAction());
        menuEntity->addAction(actionCustomer);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


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
#ifndef QT_NO_TOOLTIP
        tabWidget->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        QTableWidgetItem *___qtablewidgetitem = allEntityTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = allEntityTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Full name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = allEntityTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Sex", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = allEntityTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Date of birth", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = allEntityTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Address", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = allEntityTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Money", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = allEntityTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Is in debt", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = allEntityTable->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Debt", nullptr));
        getAllButton->setText(QApplication::translate("MainWindow", "Get all", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Get All", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Get One", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Add", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Delete", nullptr));
        menuEntity->setTitle(QApplication::translate("MainWindow", "Entity", nullptr));
    } // retranslateUi
};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
