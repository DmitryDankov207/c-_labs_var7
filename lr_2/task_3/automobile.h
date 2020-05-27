#pragma once
#include "freight_carrier.h"

class Automobile : public FreightCarrier{
public:
    Automobile(string n, string c) :
        FreightCarrier(n, c) {}

    double getCost(string dest) {
        return getDistance(dest) / 15.;
    }
    
    double getTime(string dest) {
        return getDistance(dest) / 100.;
    }
    
    double getCost(int dist) {
        return dist / 15.;
    }
    
    double getTime(int dist) {
        return dist / 100.;
    }
};
