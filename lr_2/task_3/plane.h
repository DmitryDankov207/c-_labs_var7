#pragma once
#include "freight_carrier.h"

class Plane : public FreightCarrier{
public:
    Plane(string n, string c) :
        FreightCarrier(n, c) {}

    double getCost(string dest) {
        return getDistance(dest) / 5.;
    }
    
    double getTime(string dest) {
        return getDistance(dest) / 600.;
    }
    
    double getCost(int dist) {
        return dist / 5.;
    }
    
    double getTime(int dist) {
        return dist / 600.;
    }
};
