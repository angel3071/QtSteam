#ifndef QTSTEAMMAINWINDOW_H
#define QTSTEAMMAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QTableWidget>

namespace Ui {
    class QtSteamMainWindow;
}

class QtSteamMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit QtSteamMainWindow(QWidget *parent = 0);
    QTableWidget *tabla;
    ~QtSteamMainWindow();

public slots:


private:
    Ui::QtSteamMainWindow *ui;

private slots:
    void insertRow();
    void itemEntered(QTableWidgetItem *item);
};

#endif // QTSTEAMMAINWINDOW_H
