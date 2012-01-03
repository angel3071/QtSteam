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

    void setTemperature(double temp){
            this->tempeerature = temp;}
    double getTemperature(){
            return this->tempeerature;}


private:

    double tempeerature;
    double pressure;
    double enthalpy;

signals:

    
public slots:


    
};

#endif // STATE_H
