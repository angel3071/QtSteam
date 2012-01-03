#include "qtsteammainwindow.h"
#include "ui_qtsteammainwindow.h"
#include "qsteamstate.h"

QtSteamMainWindow::QtSteamMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QtSteamMainWindow) {

    ui->setupUi(this);

//! 1 Solo por comodidad...
    tabla = ui->principalSheet;
    horizontalHeaders << tr("State") << tr("T") << tr("P") << tr("u")
                    << tr("h") << tr("s") << tr("v") << tr("x");
    horizontalHeadersToolTips << tr("State of substance") << tr("Temperarure")
                    << tr("Pressure") << tr("Internal energy") << tr("Enthalpy")
                       << tr("Entropy") << tr("Specific volume") << tr("Quality");

    //qDebug() << verticalHeaders[0];

//! 1

    //QWidget *abe = ui->principalSheet->cellWidget(2,3);
    //qDebug() << "es este" << abe;
    //Just trying

   QSteamState *a = new QSteamState();
   a->setTemperature(500);
   qDebug() << a->getTemperature();




//! 2  Los conectes...

    QObject::connect(ui->actionNew_Row, SIGNAL(triggered()), this, SLOT(insertRow()));

   // QObject::connect(tabla, SIGNAL(currentItemChanged(QTableWidgetItem*,QTableWidgetItem*)),
     //       this, SLOT(updateStatus(QTableWidgetItem*)));

    QObject::connect(tabla, SIGNAL(cellClicked(int,int)),
            this, SLOT(updateStatus(int, int)));

    //QObject::connect(ui->principalSheet, SIGNAL(itemEntered(QTableWidgetItem*)),
                     //this, SLOT(itemEntered(QTableWidgetItem*)));
//! 2

//! 3 Set the table...

    for(int i=0; i<8; i++){
            tabla->insertColumn(i);
            //tabla->horizontalHeaderItem(i)->setToolTip(horizontalHeadersToolTips.at(i));
    }
    tabla->setHorizontalHeaderLabels(horizontalHeaders);

    for(int i=0; i<8; i++)
        tabla->horizontalHeaderItem(i)->setToolTip(horizontalHeadersToolTips[i]);

    for(int i=0; i<25; i++){
        tabla->insertRow(i);
        tabla->verticalHeader()->setResizeMode(i, QHeaderView::Fixed);
    }
    tabla->setAlternatingRowColors(true);

    tabla->setColumnWidth(0,45);
    tabla->horizontalHeader()->setResizeMode(0, QHeaderView::Fixed);
    tabla->horizontalHeader()->setResizeMode(1, QHeaderView::Stretch);
    tabla->horizontalHeader()->setResizeMode(2, QHeaderView::Stretch);
    tabla->horizontalHeader()->setResizeMode(3, QHeaderView::Stretch);
    tabla->horizontalHeader()->setResizeMode(4, QHeaderView::Stretch);
    tabla->horizontalHeader()->setResizeMode(5, QHeaderView::Stretch);
    tabla->horizontalHeader()->setResizeMode(6, QHeaderView::Stretch);


    QTableWidgetItem *abe = new QTableWidgetItem("Texto", 0);
    tabla->setItem(1,0,abe);
    QPushButton *e = new QPushButton("Hola");
    tabla->setCellWidget(1,1,e);
    tabla->setCurrentCell(3,2);
    tabla->setFocus();
    //tabla->horizontalHeader()->
    //ui->principalSheet->adjustSize();
//! 3

    this->setWindowTitle(tr("No saved") + tr(" :: QtSteam"));
}

QtSteamMainWindow::~QtSteamMainWindow()
{
    delete ui;
    // Comentario agregado desde el clon en la lap
    // Este si se sube solo con un push
    // a ver este ultimo
}

void QtSteamMainWindow::updateStatus(int row, int col) {

    /*if (item && item == tabla->currentItem()) {
        statusBar()->showMessage(item->data(Qt::StatusTipRole).toString(),
                                 1000);
        ui->actualCell->setText(tr("Cell %1 ").arg(tabla->row(item) + 1));
    }*/
    ui->actualCell->setText(tr("Cell   %1 : %2").arg(horizontalHeaders[col]).arg(row + 1));
}

void QtSteamMainWindow::insertRow() {

    if(tabla->rowCount() >= 100){
        qDebug() << "Seriously?, you need more rows? i dont think so...";
        return ;
    }

    tabla->insertRow(tabla->rowCount());
    tabla->verticalHeader()->setResizeMode(tabla->rowCount() - 1, QHeaderView::Fixed);
    tabla->scrollToBottom();
}


