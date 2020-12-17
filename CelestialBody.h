#ifndef SPACE_CELESTIALBODY_H
#define SPACE_CELESTIALBODY_H
#include "AstronomicalPhenomenon .h"

using namespace std;
#include <string>

class celestialBody {
protected:
    string name;
    double mass;
    double circumference;
    double temperature;
    double gravitationalAcceleration;
    double massPers;
    double weightForce;
    astronomicalPhenomenon *ap ;

public:
    celestialBody(string name, float mass,double circumference , double temperature, double gravitationalAcceleration);
    void observeFen( astronomicalPhenomenon &ap );
    void func(celestialBody *a );
    virtual void Calculum ();
    void InfcelestialBody (ostream& os);
    friend ostream &operator<<(ostream &os, const celestialBody &);
};
#endif //SPACE_CELESTIALBODY_H
