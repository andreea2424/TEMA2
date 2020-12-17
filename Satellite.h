#ifndef SPACE_SATELLITE_H
#define SPACE_SATELLITE_H

#include <string>
#include<iostream>
using namespace std;
#include "CelestialBody.h"

class satellite : public celestialBody
{
private:
    string name;
    float gravity;

public:
    satellite(string name, double temperature1, float gravity, double gravitationalAcceleration);
public :
    void Calculum();
public:
    void printsatelitte(ostream& os);
    friend ostream &operator<<(ostream &os, const satellite &);
};

#endif //SPACE_SATELLITE_H
