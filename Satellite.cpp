#include "Satellite.h"
#include "CelestialBody.h"

#include <string>
#include<iostream>
using namespace std;

satellite::satellite(string name, double temperature1, float gravity, double gravitationalAcceleration)
        : celestialBody(name, mass, circumference, temperature1,gravitationalAcceleration) {
    this->name = name;
    this->temperature= temperature;
    this->gravity=gravity;
    this->gravitationalAcceleration= gravitationalAcceleration;

}

void satellite::Calculum(){
    cout << "All celestial bodies pulls on all objects with a force of gravity downward toward the center."<<endl;
    cout << "Find out with what force you will be attracted to this satellite by entering your weight in kg:  "<<endl;
    massPers = 0;
    cin >> massPers;
    weightForce = massPers*gravitationalAcceleration;
    cout <<"The force of gravity on the required satellite is: "<< weightForce <<"N" <<endl;
}


void satellite :: printsatelitte(ostream& os) {
    os << endl;
    os << "Name: " << name << endl;
    os << "Temperature: " << temperature << endl;
    os << endl;
}
ostream& operator<<(ostream& os, satellite& Stl)
{
    Stl.printsatelitte(os);
    return os;
}