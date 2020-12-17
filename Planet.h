#ifndef SPACE_PLANET_H
#define SPACE_PLANET_H

#include <string>
#include<iostream>
#include "CelestialBody.h"
#include "Satellite.h"

using namespace std;

class planet: public celestialBody
        {
    satellite *satellitePlanet;
    string name;
    int nrSatellites;
    float gravity;
    planet(string name, float mass, double circumference, double temperature);
public:
    planet(string name, int nrSatellites ,double gravity, double gravitationalAcceleration);
    planet(string name, int nrSatellites ,float gravity, satellite *satellitePlanet);
    int getnrSattelites();
    float getgravity();
    void addSattelits();
    void Calculum();
    void printPlanet(ostream &os);
    friend ostream& operator<<(ostream& os, const planet& );
};
#endif //SPACE_PLANET_H
