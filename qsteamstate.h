#ifndef STEAMSTATE_H
#define STEAMSTATE_H

#include "state.h"


extern "C"{
        #include <freesteam/steam.h>
        //#include <freesteam/steam_pT.h>
        //#include <freesteam/region4.h>
    }

//Existe una estructura llamada "SteamState" dentro de la libreria, por eso la 'q' en el nombre de la clase...

class QSteamState : public State
{
public:
    QSteamState();
};

#endif // STEAMSTATE_H
