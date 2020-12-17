#include "CelestialBody.h"
#include "AstronomicalPhenomenon .h"
#include<iostream>
using namespace std;

celestialBody::celestialBody(string name, float mass,double circumference , double temperature, double gravitationalAcceleration)
    {
        this-> name = name;
        this-> mass= mass;
        this-> circumference = circumference;
        this->temperature = temperature;
        this->gravitationalAcceleration=gravitationalAcceleration;
    }
void celestialBody::observeFen(astronomicalPhenomenon &ap ) {
    //this->ap = &ap;
    ap.DifFen();
    }
void celestialBody::func(celestialBody *a ){
         a->Calculum();
     }
 void celestialBody::Calculum ()
    {

        cout << "The force of weight for a person on a celestial body it cannot be calculated in general case:"<< endl;

    }



void celestialBody:: InfcelestialBody (ostream& os) {
        os << endl;
        os << "Name: " << name << endl;
        os << "Mass: "<< mass<<"km/s"<< endl;
        os << "Circumference: " << circumference <<"L☉" <<endl;
        os << "Temperature: "<<temperature<<"K"<< endl;
        os << endl;
    }
ostream& operator<<(ostream& os, celestialBody& cB) {
    cB.InfcelestialBody(os);
    return os;
}
