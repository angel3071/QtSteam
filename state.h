#ifndef STATE_H
#define STATE_H

#include <QObject>

class State : public QObject
{
    Q_OBJECT
public:
    explicit State(QObject *parent = 0);

    bool allRigth;
    int onCreationErrorCode;

    //void setTemperature(double temp){
    //      this->temperature = temp;}
    double getTemperature() {
            return this->temperature; }

    double getPressure() {
            return this->pressure; }

    double getInternalEnergy() {
            return this->internalEnergy; }

    double getEntropy() {
            return this->entropy; }

    double getVolume() {
            return this->volume; }

    double getQuality() {
            return this->quality; }

    double getEnthalpy() {
            return this->enthalpy; }
    double temperature;
    double pressure;
    double internalEnergy;
    double entropy;
    double volume;
    double quality;
    double enthalpy;


private:

signals:

    
public slots:


    
};

#endif // STATE_H
