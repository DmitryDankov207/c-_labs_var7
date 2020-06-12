#pragma once
#include "freight_carrier.h"

// Класс Самолет, наследуется от Грузоперевозчика.
// Методы getTime и getCost перегружены.
class Plane : public FreightCarrier{
public:
    // Конструктор копирования.
    Plane(string n, string c) :
        FreightCarrier(n, c) {}

    // Возвращает цену полета до указанного города.    
    double getCost(string dest) {
        return getDistance(dest) / 5.;
    }
    
    // Возвращает время полета до указанного города. 
    double getTime(string dest) {
        return getDistance(dest) / 600.;
    }
    
    // Возвращает цену полета на указанное расстояние.
    double getCost(int dist) {
        return dist / 5.;
    }

    // Возвращает время полета на указанное расстояние.    
    double getTime(int dist) {
        return dist / 600.;
    }
};
