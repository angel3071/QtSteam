#include "qtsteammainwindow.h"
#include "ui_qtsteammainwindow.h"

QtSteamMainWindow::QtSteamMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QtSteamMainWindow)
{
    ui->setupUi(this);
}

QtSteamMainWindow::~QtSteamMainWindow()
{
    delete ui;
}
