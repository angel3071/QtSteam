#include "qsteamstate.h"

QSteamState::QSteamState() {

    this->allRigth = false;

}

QSteamState::QSteamState(double temp, double press) {


    //aqui hay que controlar aun los rangos posibles para los valores dados...


   // s = freesteam_set_pT(press, temp);

    this->temperature = temp;
    this->pressure = press;
    //this->enthalpy = freesteam_s(s);
    this->enthalpy = 200.0;

    this->allRigth = true;





}

