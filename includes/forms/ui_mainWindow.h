/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
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
    QPushButton *getOneButton;
    QTableWidget *oneEntityTable;
    QLabel *label;
    QSpinBox *idInput_One;
    QLabel *ErrorLable_One;
    QWidget *tab_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_firstName;
    QLineEdit *input_firstName;
    QLabel *label_middleName;
    QLineEdit *input_middleName;
    QLabel *label_lastName;
    QLineEdit *input_lastName;
    QLabel *label_sex;
    QComboBox *input_sex;
    QLabel *label_dateOfBirth;
    QDateEdit *input_dateOfBirth;
    QLabel *label_address;
    QLineEdit *input_address;
    QLabel *label_amounOfM;
    QDoubleSpinBox *input_amountOfM;
    QLabel *label_isInDebt;
    QComboBox *input_isInDebt;
    QLabel *label_amountOfD;
    QDoubleSpinBox *input_amountOfD;
    QPushButton *addButton;
    QWidget *tab_4;
    QLabel *ErrorLable_Delete;
    QPushButton *deleteButton;
    QLabel *label_2;
    QSpinBox *idInput_Delete;
    QTableWidget *deleteEntityTable;
    QLabel *question;
    QPushButton *yesButton;
    QPushButton *noButton;
    QMenuBar *menubar;
    QMenu *menuEntity;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(900, 653);
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
        getOneButton = new QPushButton(tab_2);
        getOneButton->setObjectName(QString::fromUtf8("getOneButton"));
        getOneButton->setGeometry(QRect(0, 210, 901, 31));
        oneEntityTable = new QTableWidget(tab_2);
        if (oneEntityTable->columnCount() < 8)
            oneEntityTable->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        oneEntityTable->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        oneEntityTable->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        oneEntityTable->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        oneEntityTable->setHorizontalHeaderItem(3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        oneEntityTable->setHorizontalHeaderItem(4, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        oneEntityTable->setHorizontalHeaderItem(5, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        oneEntityTable->setHorizontalHeaderItem(6, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        oneEntityTable->setHorizontalHeaderItem(7, __qtablewidgetitem15);
        oneEntityTable->setObjectName(QString::fromUtf8("oneEntityTable"));
        oneEntityTable->setGeometry(QRect(0, 240, 901, 71));
        oneEntityTable->setLineWidth(1);
        oneEntityTable->setGridStyle(Qt::SolidLine);
        oneEntityTable->setSortingEnabled(true);
        oneEntityTable->horizontalHeader()->setDefaultSectionSize(112);
        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(330, 120, 251, 17));
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        idInput_One = new QSpinBox(tab_2);
        idInput_One->setObjectName(QString::fromUtf8("idInput_One"));
        idInput_One->setGeometry(QRect(330, 140, 251, 26));
        idInput_One->setMaximum(999999999);
        ErrorLable_One = new QLabel(tab_2);
        ErrorLable_One->setObjectName(QString::fromUtf8("ErrorLable_One"));
        ErrorLable_One->setGeometry(QRect(270, 340, 291, 20));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        layoutWidget = new QWidget(tab_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 5, 891, 561));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_firstName = new QLabel(layoutWidget);
        label_firstName->setObjectName(QString::fromUtf8("label_firstName"));
        label_firstName->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_firstName);

        input_firstName = new QLineEdit(layoutWidget);
        input_firstName->setObjectName(QString::fromUtf8("input_firstName"));

        verticalLayout->addWidget(input_firstName);

        label_middleName = new QLabel(layoutWidget);
        label_middleName->setObjectName(QString::fromUtf8("label_middleName"));
        label_middleName->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_middleName);

        input_middleName = new QLineEdit(layoutWidget);
        input_middleName->setObjectName(QString::fromUtf8("input_middleName"));

        verticalLayout->addWidget(input_middleName);

        label_lastName = new QLabel(layoutWidget);
        label_lastName->setObjectName(QString::fromUtf8("label_lastName"));
        label_lastName->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_lastName);

        input_lastName = new QLineEdit(layoutWidget);
        input_lastName->setObjectName(QString::fromUtf8("input_lastName"));

        verticalLayout->addWidget(input_lastName);

        label_sex = new QLabel(layoutWidget);
        label_sex->setObjectName(QString::fromUtf8("label_sex"));
        label_sex->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_sex);

        input_sex = new QComboBox(layoutWidget);
        input_sex->addItem(QString());
        input_sex->addItem(QString());
        input_sex->setObjectName(QString::fromUtf8("input_sex"));

        verticalLayout->addWidget(input_sex);

        label_dateOfBirth = new QLabel(layoutWidget);
        label_dateOfBirth->setObjectName(QString::fromUtf8("label_dateOfBirth"));
        label_dateOfBirth->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_dateOfBirth);

        input_dateOfBirth = new QDateEdit(layoutWidget);
        input_dateOfBirth->setObjectName(QString::fromUtf8("input_dateOfBirth"));
        input_dateOfBirth->setMinimumDateTime(QDateTime(QDate(1900, 9, 14), QTime(0, 0, 0)));
        input_dateOfBirth->setMaximumDate(QDate(2024, 12, 31));
        input_dateOfBirth->setMinimumDate(QDate(1900, 9, 14));
        input_dateOfBirth->setCalendarPopup(true);

        verticalLayout->addWidget(input_dateOfBirth);

        label_address = new QLabel(layoutWidget);
        label_address->setObjectName(QString::fromUtf8("label_address"));
        label_address->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_address);

        input_address = new QLineEdit(layoutWidget);
        input_address->setObjectName(QString::fromUtf8("input_address"));

        verticalLayout->addWidget(input_address);

        label_amounOfM = new QLabel(layoutWidget);
        label_amounOfM->setObjectName(QString::fromUtf8("label_amounOfM"));
        label_amounOfM->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_amounOfM);

        input_amountOfM = new QDoubleSpinBox(layoutWidget);
        input_amountOfM->setObjectName(QString::fromUtf8("input_amountOfM"));
        input_amountOfM->setMaximum(9999999999999999538762658202121142272.000000000000000);

        verticalLayout->addWidget(input_amountOfM);

        label_isInDebt = new QLabel(layoutWidget);
        label_isInDebt->setObjectName(QString::fromUtf8("label_isInDebt"));
        label_isInDebt->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_isInDebt);

        input_isInDebt = new QComboBox(layoutWidget);
        input_isInDebt->addItem(QString());
        input_isInDebt->addItem(QString());
        input_isInDebt->setObjectName(QString::fromUtf8("input_isInDebt"));

        verticalLayout->addWidget(input_isInDebt);

        label_amountOfD = new QLabel(layoutWidget);
        label_amountOfD->setObjectName(QString::fromUtf8("label_amountOfD"));
        label_amountOfD->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_amountOfD);

        input_amountOfD = new QDoubleSpinBox(layoutWidget);
        input_amountOfD->setObjectName(QString::fromUtf8("input_amountOfD"));
        input_amountOfD->setEnabled(false);
        input_amountOfD->setMaximum(9999999999999999538762658202121142272.000000000000000);

        verticalLayout->addWidget(input_amountOfD);

        addButton = new QPushButton(layoutWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setEnabled(false);

        verticalLayout->addWidget(addButton);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        ErrorLable_Delete = new QLabel(tab_4);
        ErrorLable_Delete->setObjectName(QString::fromUtf8("ErrorLable_Delete"));
        ErrorLable_Delete->setGeometry(QRect(270, 340, 291, 20));
        deleteButton = new QPushButton(tab_4);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(0, 210, 901, 31));
        label_2 = new QLabel(tab_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(330, 120, 251, 17));
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignCenter);
        idInput_Delete = new QSpinBox(tab_4);
        idInput_Delete->setObjectName(QString::fromUtf8("idInput_Delete"));
        idInput_Delete->setGeometry(QRect(330, 140, 251, 26));
        idInput_Delete->setMaximum(999999999);
        deleteEntityTable = new QTableWidget(tab_4);
        if (deleteEntityTable->columnCount() < 8)
            deleteEntityTable->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        deleteEntityTable->setHorizontalHeaderItem(0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        deleteEntityTable->setHorizontalHeaderItem(1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        deleteEntityTable->setHorizontalHeaderItem(2, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        deleteEntityTable->setHorizontalHeaderItem(3, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        deleteEntityTable->setHorizontalHeaderItem(4, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        deleteEntityTable->setHorizontalHeaderItem(5, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        deleteEntityTable->setHorizontalHeaderItem(6, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        deleteEntityTable->setHorizontalHeaderItem(7, __qtablewidgetitem23);
        deleteEntityTable->setObjectName(QString::fromUtf8("deleteEntityTable"));
        deleteEntityTable->setGeometry(QRect(0, 240, 901, 71));
        deleteEntityTable->setLineWidth(1);
        deleteEntityTable->setGridStyle(Qt::SolidLine);
        deleteEntityTable->setSortingEnabled(true);
        deleteEntityTable->horizontalHeader()->setDefaultSectionSize(112);
        question = new QLabel(tab_4);
        question->setObjectName(QString::fromUtf8("question"));
        question->setEnabled(false);
        question->setGeometry(QRect(410, 380, 91, 17));
        yesButton = new QPushButton(tab_4);
        yesButton->setObjectName(QString::fromUtf8("yesButton"));
        yesButton->setEnabled(false);
        yesButton->setGeometry(QRect(340, 420, 83, 25));
        noButton = new QPushButton(tab_4);
        noButton->setObjectName(QString::fromUtf8("noButton"));
        noButton->setEnabled(false);
        noButton->setGeometry(QRect(480, 420, 83, 25));
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 900, 22));
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
        getOneButton->setText(QApplication::translate("MainWindow", "Get", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = oneEntityTable->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "id", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = oneEntityTable->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "Full name", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = oneEntityTable->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "Sex", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = oneEntityTable->horizontalHeaderItem(3);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "Date of birth", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = oneEntityTable->horizontalHeaderItem(4);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "Address", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = oneEntityTable->horizontalHeaderItem(5);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "Money", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = oneEntityTable->horizontalHeaderItem(6);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "Is in debt", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = oneEntityTable->horizontalHeaderItem(7);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "Debt", nullptr));
        label->setText(QApplication::translate("MainWindow", "ID", nullptr));
        ErrorLable_One->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Get One", nullptr));
        label_firstName->setText(QApplication::translate("MainWindow", "First name", nullptr));
        label_middleName->setText(QApplication::translate("MainWindow", "Middle name", nullptr));
        label_lastName->setText(QApplication::translate("MainWindow", "Last name", nullptr));
        label_sex->setText(QApplication::translate("MainWindow", "Sex", nullptr));
        input_sex->setItemText(0, QApplication::translate("MainWindow", "Male", nullptr));
        input_sex->setItemText(1, QApplication::translate("MainWindow", "Female", nullptr));

        label_dateOfBirth->setText(QApplication::translate("MainWindow", "Date of birth", nullptr));
        input_dateOfBirth->setDisplayFormat(QApplication::translate("MainWindow", "M/d/yyyy", nullptr));
        label_address->setText(QApplication::translate("MainWindow", "Address", nullptr));
        label_amounOfM->setText(QApplication::translate("MainWindow", "Amount of money", nullptr));
        label_isInDebt->setText(QApplication::translate("MainWindow", "Is in debt?", nullptr));
        input_isInDebt->setItemText(0, QApplication::translate("MainWindow", "No", nullptr));
        input_isInDebt->setItemText(1, QApplication::translate("MainWindow", "Yes", nullptr));

        label_amountOfD->setText(QApplication::translate("MainWindow", "Amount of debt", nullptr));
        addButton->setText(QApplication::translate("MainWindow", "Add", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Add", nullptr));
        ErrorLable_Delete->setText(QString());
        deleteButton->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = deleteEntityTable->horizontalHeaderItem(0);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "id", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = deleteEntityTable->horizontalHeaderItem(1);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "Full name", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = deleteEntityTable->horizontalHeaderItem(2);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "Sex", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = deleteEntityTable->horizontalHeaderItem(3);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "Date of birth", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = deleteEntityTable->horizontalHeaderItem(4);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "Address", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = deleteEntityTable->horizontalHeaderItem(5);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "Money", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = deleteEntityTable->horizontalHeaderItem(6);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "Is in debt", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = deleteEntityTable->horizontalHeaderItem(7);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "Debt", nullptr));
        question->setText(QApplication::translate("MainWindow", "Are you sure?", nullptr));
        yesButton->setText(QApplication::translate("MainWindow", "Yes", nullptr));
        noButton->setText(QApplication::translate("MainWindow", "No", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Delete", nullptr));
        menuEntity->setTitle(QApplication::translate("MainWindow", "Entity", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAINWINDOW_H
