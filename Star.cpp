
#include "CelestialBody.h"
#include<iostream>
using namespace std;
#include "Star.h"

star :: star(string name, double temperature, float rotationspeed,
             double luminosity, double gravitationalAcceleration) : celestialBody(name, mass, circumference, temperature, gravitationalAcceleration) {
    this-> name = name;
    this-> rotationSpeed= rotationspeed;
    this-> luminosity = luminosity;
    this->temperature = temperature;
    this->gravitationalAcceleration = gravitationalAcceleration;
}
void star :: Calculum(){

    cout << "All celestial bodies pulls on all objects with a force of gravity downward toward the center."<<endl;
    cout << "Find out with what force you will be attracted to this star by entering your weight in kg:  "<<endl;
    massPers = 0;
    cin >> weightForce;
    weightForce = massPers*gravitationalAcceleration;
    cout <<"The force of gravity on the required star is: "<< weightForce << endl;
}
void star :: InfStar (ostream& os) {
    os << endl;
    os << "Name: " << name << endl;
    os <<"Rostion speed: "<< rotationSpeed<<"km/s"<< endl;
    os << "Luminosity: " << luminosity <<"L☉" <<endl;
    os << "Temperature: "<<temperature<<"K"<< endl;
    os << endl;
}
ostream& operator<<(ostream& os, star& star1)
{
    star1.InfStar(os);
    return os;
}

