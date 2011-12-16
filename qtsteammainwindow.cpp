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
    QToolBox *tool = ui->toolBox;
    tool->setWindowTitle("Hola a todos");
    tool->setWindowTitle("Hola a todos");
}
