#include "../../includes/forms/mainWindow.h"
#include "../../includes/forms/ui_mainWindow.h"
#include <iostream>

MainWindow::MainWindow(BankManagment<Customer>* bank, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    MainWindow::bank = bank;

    ui->setupUi(this);
    ui->allEntityTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->oneEntityTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->deleteEntityTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->ErrorLable_One->setStyleSheet("QLabel { color : red; }");
    ui->ErrorLable_Delete->setStyleSheet("QLabel { color : red; }");

    connect(ui->getAllButton, SIGNAL(clicked()), SLOT(getAll()));
    connect(ui->getOneButton, SIGNAL(clicked()), SLOT(getOne()));
    connect(ui->deleteButton, SIGNAL(clicked()), SLOT(deleteEntity()));
    connect(ui->yesButton, SIGNAL(clicked()), SLOT(yesClicked()));
    connect(ui->noButton, SIGNAL(clicked()), SLOT(noClicked()));
}

void MainWindow::getAll() {
    ui->allEntityTable->setRowCount(0);

    std::vector<Customer*> allCustomers = bank->getAll();

    for(int c = 0; c < allCustomers.size(); c++) {
        Customer* currentCustomer = allCustomers.at(c);

        std::string debtStatusAnswer = currentCustomer->isInDebt() ? "Yes" : "No";

        ui->allEntityTable->insertRow( ui->allEntityTable->rowCount() );

        QTableWidgetItem* id = new QTableWidgetItem(QString::number(currentCustomer->getId()));
        QTableWidgetItem* fullName = new QTableWidgetItem(QString::fromStdString(currentCustomer->getFullName()));
        QTableWidgetItem* sex = new QTableWidgetItem(QChar(currentCustomer->getSex()));
        QTableWidgetItem* dateOfBirth = new QTableWidgetItem(QString::fromStdString(currentCustomer->getDateOfBirth()));
        QTableWidgetItem* address = new QTableWidgetItem(QString::fromStdString(currentCustomer->getAddress()));
        QTableWidgetItem* money = new QTableWidgetItem(QString::number(currentCustomer->getMoney()));
        QTableWidgetItem* debtStatus = new QTableWidgetItem(QString::fromStdString(debtStatusAnswer));
        QTableWidgetItem* debt = new QTableWidgetItem(QString::number(currentCustomer->getDebt()));

        ui->allEntityTable->setItem(c, 0, id);
        ui->allEntityTable->setItem(c, 1, fullName);
        ui->allEntityTable->setItem(c, 2, sex);
        ui->allEntityTable->setItem(c, 3, dateOfBirth);
        ui->allEntityTable->setItem(c, 4, address);
        ui->allEntityTable->setItem(c, 5, money);
        ui->allEntityTable->setItem(c, 6, debtStatus);
        ui->allEntityTable->setItem(c, 7, debt);
    }
}

void MainWindow::getOne() {
    
    try {
        Customer* customer = bank->getOne(ui->idInput_One->text().toInt());

        ui->oneEntityTable->setRowCount(0);
        ui->ErrorLable_One->setText("");

        std::string debtStatusAnswer = customer->isInDebt() ? "Yes" : "No";

        QTableWidgetItem* id = new QTableWidgetItem(QString::number(customer->getId()));
        QTableWidgetItem* fullName = new QTableWidgetItem(QString::fromStdString(customer->getFullName()));
        QTableWidgetItem* sex = new QTableWidgetItem(QChar(customer->getSex()));
        QTableWidgetItem* dateOfBirth = new QTableWidgetItem(QString::fromStdString(customer->getDateOfBirth()));
        QTableWidgetItem* address = new QTableWidgetItem(QString::fromStdString(customer->getAddress()));
        QTableWidgetItem* money = new QTableWidgetItem(QString::number(customer->getMoney()));
        QTableWidgetItem* debtStatus = new QTableWidgetItem(QString::fromStdString(debtStatusAnswer));
        QTableWidgetItem* debt = new QTableWidgetItem(QString::number(customer->getDebt()));

        ui->oneEntityTable->insertRow( ui->oneEntityTable->rowCount() );

        ui->oneEntityTable->setItem(0, 0, id);
        ui->oneEntityTable->setItem(0, 1, fullName);
        ui->oneEntityTable->setItem(0, 2, sex);
        ui->oneEntityTable->setItem(0, 3, dateOfBirth);
        ui->oneEntityTable->setItem(0, 4, address);
        ui->oneEntityTable->setItem(0, 5, money);
        ui->oneEntityTable->setItem(0, 6, debtStatus);
        ui->oneEntityTable->setItem(0, 7, debt);

    } catch(char const* error) {
        ui->ErrorLable_One->setText(QString::fromStdString(error));
    }
}

void MainWindow::deleteEntity() {
    
    try {
        Customer* customer = bank->getOne(ui->idInput_Delete->text().toUInt());

        ui->deleteEntityTable->setRowCount(0);
        ui->ErrorLable_Delete->setText("");

        std::string debtStatusAnswer = customer->isInDebt() ? "Yes" : "No";

        QTableWidgetItem* id = new QTableWidgetItem(QString::number(customer->getId()));
        QTableWidgetItem* fullName = new QTableWidgetItem(QString::fromStdString(customer->getFullName()));
        QTableWidgetItem* sex = new QTableWidgetItem(QChar(customer->getSex()));
        QTableWidgetItem* dateOfBirth = new QTableWidgetItem(QString::fromStdString(customer->getDateOfBirth()));
        QTableWidgetItem* address = new QTableWidgetItem(QString::fromStdString(customer->getAddress()));
        QTableWidgetItem* money = new QTableWidgetItem(QString::number(customer->getMoney()));
        QTableWidgetItem* debtStatus = new QTableWidgetItem(QString::fromStdString(debtStatusAnswer));
        QTableWidgetItem* debt = new QTableWidgetItem(QString::number(customer->getDebt()));

        ui->deleteEntityTable->insertRow( ui->deleteEntityTable->rowCount() );

        ui->deleteEntityTable->setItem(0, 0, id);
        ui->deleteEntityTable->setItem(0, 1, fullName);
        ui->deleteEntityTable->setItem(0, 2, sex);
        ui->deleteEntityTable->setItem(0, 3, dateOfBirth);
        ui->deleteEntityTable->setItem(0, 4, address);
        ui->deleteEntityTable->setItem(0, 5, money);
        ui->deleteEntityTable->setItem(0, 6, debtStatus);
        ui->deleteEntityTable->setItem(0, 7, debt);

        ui->question->setEnabled(1);
        ui->yesButton->setEnabled(1);
        ui->noButton->setEnabled(1);
    } catch(char const* error) {
        ui->ErrorLable_Delete->setText(QString::fromStdString(error));

        ui->deleteEntityTable->setRowCount(0);

        ui->question->setEnabled(0);
        ui->yesButton->setEnabled(0);
        ui->noButton->setEnabled(0);
    }
}

void MainWindow::yesClicked() {
    uint64_t id = ui->deleteEntityTable->item(0, 0)->text().toUInt();
    bank->deleteById(id);
    
    ui->question->setEnabled(0);
    ui->yesButton->setEnabled(0);
    ui->noButton->setEnabled(0);

    ui->deleteEntityTable->setRowCount(0);
}

void MainWindow::noClicked() {
    ui->question->setEnabled(0);
    ui->yesButton->setEnabled(0);
    ui->noButton->setEnabled(0);

    ui->deleteEntityTable->setRowCount(0);
}