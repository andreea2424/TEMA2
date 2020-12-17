//
// Created by Andreea Stanciu on 15.12.2020.
//

#ifndef SPACE_STAR_H
#define SPACE_STAR_H
#include<iostream>
using namespace std;
class star : public celestialBody {
private:
    string name;
    float rotationSpeed;
    double luminosity;
public:
    star(string name, double temperature, float rotationspeed,double luminosity, double gravitationalAcceleration);
public:
    void Calculum();
public:
    void InfStar (ostream& os);
    friend ostream &operator<<(ostream &os, const star &);
};
#endif //SPACE_STAR_H
