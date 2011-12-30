#ifndef STEAMSTATE_H
#define STEAMSTATE_H

#include <QObject>
#include <state.h>

class SteamState : public State
{
    Q_OBJECT
public:
    explicit SteamState(State *parent);
    
signals:
    
public slots:
    
};

#endif // STEAMSTATE_H
