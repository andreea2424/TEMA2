#include "Constellations.h"
#include "Satellite.h"
#include "Eclipse.h"
#include "Planet.h"
#include "meteorShower.h"
#include "AstronomicalPhenomenon .h"
#include "CelestialBody.h"
#include "PlanetEvent.h"
#include "Satellite.h"
#include "Eclipse.h"
#include <iostream>
using namespace std;

int main() {


    satellite *Moon = new satellite("Moon",10.921,127,1.62519);
    Eclipse Eclipse("Eclipsa de luna ","2:00:00","Anuala");
    Moon->observeFen(Eclipse);

    meteorShower Perseidele("Perseide","12 August","Swift-Tuttle");
    planet *Earth = new planet( "Earth",1,9.8,9.8);
    celestialBody Oplaneta("a",3,4,5,6);
    Earth->observeFen(Perseidele);
    Oplaneta.func(Moon);

   // Planetevent *Jupitemr = new Planetevent;



/*
    planet; Venus( "Venus",0,8.87,2.0);
   // cout <<Venus;

    planet Mercury( "Mercury",0,3.7,0.1);
    //cout << Mercury;

    planet Mars( "Mars",2,3.711,2);
   // cout << Mars;


    constellations cst("Cygnus", "Nordica","Lebada");
   // cout << cst;*/
}
