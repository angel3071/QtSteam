#ifndef STATE_H
#define STATE_H

#include <QObject>

class State : public QObject
{
    Q_OBJECT
public:
    explicit State(QObject *parent = 0);
    double t;
    QBool calculate();
    
signals:
    
public slots:


    
};

#endif // STATE_H
