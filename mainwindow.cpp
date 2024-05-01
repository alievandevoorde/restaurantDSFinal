#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "menu.h"
#include <QListWidget>
#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>
#include <QDebug>
#include <QMessageBox>

using namespace std;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    // Create menu and calculate top 5 least used ingredients
    Menu menu;
    auto leastUsedIngredients = menu.getLeastUsedIngredients();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_lettuce_btn_clicked()
{
    menu.incrementIngredient("lettuce");
}


void MainWindow::on_tomato_btn_clicked()
{
    menu.incrementIngredient("tomato");
}


void MainWindow::on_onion_btn_clicked()
{
    menu.incrementIngredient("onion");
}


void MainWindow::on_pickle_btn_clicked()
{
    menu.incrementIngredient("pickle");
}


void MainWindow::on_mayo_btn_clicked()
{
    menu.incrementIngredient("mayo");
}


void MainWindow::on_cheese_btn_clicked()
{
    menu.incrementIngredient("cheese");
}


void MainWindow::on_patty_btn_clicked()
{
    menu.incrementIngredient("patty");
}


void MainWindow::on_bun_btn_clicked()
{
    menu.incrementIngredient("bun");
}


void MainWindow::on_burger_btn_clicked()
{
    menu.incrementIngredient("lettuce");
    menu.incrementIngredient("tomato");
    menu.incrementIngredient("onion");
    menu.incrementIngredient("pickle");
    menu.incrementIngredient("mayo");
    menu.incrementIngredient("cheese");
    menu.incrementIngredient("patty");
    menu.incrementIngredient("bun");
}


void MainWindow::on_regFries_btn_clicked()
{
    menu.incrementIngredient("fries");
}


void MainWindow::on_waffleFries_btn_clicked()
{
    menu.incrementIngredient("waffleFries");
}


void MainWindow::on_sweetPotatoFries_btn_clicked()
{
    menu.incrementIngredient("sweetPotatoFries");
}


void MainWindow::on_pushButton_13_clicked()
{
    // Get the least used ingredients
    auto leastUsedIngredients = menu.getLeastUsedIngredients();

    // Prepare the message to display
    QString message = "Top 5 Least Used Ingredients:\n";
    for (const auto& pair : leastUsedIngredients) {
        message += QString::fromStdString(pair.first) + ": " + QString::number(pair.second) + "\n";
    }

    // Display the message in a pop-up window
    QMessageBox::information(this, "Least Used Ingredients", message);
}


void MainWindow::on_pushButton_clicked()
{
    // Reset the menu to its intial state
    menu = Menu();
}

