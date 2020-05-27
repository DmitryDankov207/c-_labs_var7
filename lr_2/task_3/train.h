#pragma once
#include "freight_carrier.h"

class Train : public FreightCarrier{
public:
    Train(string n, string c) :
        FreightCarrier(n, c) {}

    double getCost(string dest) {
        return getDistance(dest) / 10.;
    }
    
    double getTime(string dest) {
        return getDistance(dest) / 60.;
    }
    
    double getCost(int dist) {
        return dist / 10.;
    }
    
    double getTime(int dist) {
        return dist / 60.;
    }
};
