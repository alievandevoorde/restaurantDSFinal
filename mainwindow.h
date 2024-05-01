#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include "menu.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_lettuce_btn_clicked();

    void on_tomato_btn_clicked();

    void on_onion_btn_clicked();

    void on_pickle_btn_clicked();

    void on_mayo_btn_clicked();

    void on_cheese_btn_clicked();

    void on_patty_btn_clicked();

    void on_bun_btn_clicked();

    void on_burger_btn_clicked();

    void on_regFries_btn_clicked();

    void on_waffleFries_btn_clicked();

    void on_sweetPotatoFries_btn_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Menu menu;
};
#endif // MAINWINDOW_H
