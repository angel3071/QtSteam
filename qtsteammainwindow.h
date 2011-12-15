#ifndef QTSTEAMMAINWINDOW_H
#define QTSTEAMMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class QtSteamMainWindow;
}

class QtSteamMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit QtSteamMainWindow(QWidget *parent = 0);
    ~QtSteamMainWindow();

private:
    Ui::QtSteamMainWindow *ui;
};

#endif // QTSTEAMMAINWINDOW_H
