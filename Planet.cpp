#include "Planet.h"
#include "Satellite.h"
#include "AstronomicalPhenomenon .h"
#include "CelestialBody.h"
#include <string>
#include<iostream>
using namespace std;

    planet::planet(string name, float mass, double circumference, double temperature)
            : celestialBody(name, mass, circumference, temperature, gravitationalAcceleration){

        name = "unknown";
        nrSatellites = 0;
        gravity = 0;

    }

    planet::planet(string name, int nrSatellites ,double gravity, double gravitationalAcceleration)
            : celestialBody(name, mass, circumference, temperature, gravitationalAcceleration) {
        this->name = name;
        this->nrSatellites = nrSatellites;
        this->gravity = gravity;
        this->gravitationalAcceleration=gravitationalAcceleration;

    }

    planet::planet(string name, int nrSatellites ,float gravity, satellite *satellitePlanet)
            : celestialBody(name, mass, circumference, temperature, gravitationalAcceleration) {
        this->name = name;
        this->nrSatellites = nrSatellites;
        this->gravity = gravity;
        this->satellitePlanet = satellitePlanet;

    }




    /*float getcircircumference() {
        return circumference;
    }
*/
    float planet::getgravity() {
        return gravity;
    }

    void planet:: addSattelits() {
        nrSatellites++;
    }

    void planet::Calculum(){

        cout << "All celestial bodies pulls on all objects with a force of gravity downward toward the center."<<endl;
        cout << "Find out with what force you will be attracted to this planet by entering your weight in kg:  "<<endl;
        massPers=0;
        cin >> massPers;
        weightForce = massPers*gravitationalAcceleration;
        cout <<"The force of gravity on the required planet is: "<< weightForce << " N"<<endl;
    }

    void planet ::printPlanet(ostream &os) {

        os << endl;
        os << "Name: " << name << "\n";
        os << "Number of sattelits: " << nrSatellites << "\n";
        os << "Gravity of the planet in: " << gravity << " m/s2 " << "\n";


        os << endl;

    }


ostream& operator<<(ostream& os,planet& P )
{
    P.printPlanet(os);
    return os;
}

