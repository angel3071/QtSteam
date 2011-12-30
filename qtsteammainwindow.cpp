#include "qtsteammainwindow.h"
#include "ui_qtsteammainwindow.h"

QtSteamMainWindow::QtSteamMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QtSteamMainWindow) {

    ui->setupUi(this);

//! 1 Solo por comodidad...
    tabla = ui->principalSheet;

//! 1

    //QWidget *abe = ui->principalSheet->cellWidget(2,3);
    //qDebug() << "es este" << abe;
    //Just trying

    QObject::connect(ui->actionNew_Row, SIGNAL(triggered()), this, SLOT(insertRow()));
    //QObject::connect(ui->principalSheet, SIGNAL(itemEntered(QTableWidgetItem*)),
                     //this, SLOT(itemEntered(QTableWidgetItem*)));

    for(int i=0; i<25; i++)
        ui->principalSheet->insertRow(i);

    tabla->setAlternatingRowColors(true);

    tabla->setColumnWidth(0,45);
    tabla->horizontalHeader()->setResizeMode(0, QHeaderView::Fixed);
    tabla->horizontalHeader()->setResizeMode(1, QHeaderView::Stretch);
    tabla->horizontalHeader()->setResizeMode(2, QHeaderView::Stretch);
    tabla->horizontalHeader()->setResizeMode(3, QHeaderView::Stretch);
    tabla->horizontalHeader()->setResizeMode(4, QHeaderView::Stretch);
    tabla->horizontalHeader()->setResizeMode(5, QHeaderView::Stretch);
    tabla->horizontalHeader()->setResizeMode(6, QHeaderView::Stretch);
    QTableWidgetItem *abe = new QTableWidgetItem("5");
    tabla->setItem(1,0,abe);
    QPushButton *e = new QPushButton("Hola");
    tabla->setCellWidget(1,1,e);
    tabla->setCurrentCell(3,2);
    tabla->setFocus();
    //ui->principalSheet->adjustSize();

    this->setWindowTitle(tr("No saved") + tr(" :: QtSteam"));
}

QtSteamMainWindow::~QtSteamMainWindow()
{
    delete ui;
    // Comentario agregado desde el clon en la lap
    // Este si se sube solo con un push
    // a ver este ultimo
}

void QtSteamMainWindow::insertRow() {

    if(tabla->rowCount() >= 100){
        qDebug() << "Seriously?, you need more rows? i dont think so...";
        return ;
    }

    ui->principalSheet->insertRow(ui->principalSheet->rowCount());
    ui->principalSheet->scrollToBottom();
}

void QtSteamMainWindow::itemEntered(QTableWidgetItem *item) {

   tabla->setCurrentCell(item->row() + 1, item->column());
}
