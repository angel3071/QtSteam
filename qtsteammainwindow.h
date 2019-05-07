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
    //QStringList *verticalHeaders;
    QStringList horizontalHeaders;
    QStringList horizontalHeadersToolTips;

    ~QtSteamMainWindow();

public slots:
    void updateStatus(int row, int col);
    void resolveRow();


private:
    Ui::QtSteamMainWindow *ui;

private slots:
    void insertRow();
    void on_principalSheet_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn);
};

#endif // QTSTEAMMAINWINDOW_H
