#pragma once
#include "freight_carrier.h"

// Класс Автомобиль, наследуется от Грузоперевозчика.
// Методы getTime и getCost перегружены.
class Automobile : public FreightCarrier{
public:
    // Конструктор копирования.
    Automobile(string n, string c) :
        FreightCarrier(n, c) {}

    // Возвращает цену проезда до указанного города.
    double getCost(string dest) {
        return getDistance(dest) / 15.;
    }

    // Возвращает время проезда до указанного города.     
    double getTime(string dest) {
        return getDistance(dest) / 100.;
    }

    // Возвращает цену проезда на указанное расстояние.    
    double getCost(int dist) {
        return dist / 15.;
    }

    // Возвращает время проезда на указанное расстояние.      
    double getTime(int dist) {
        return dist / 100.;
    }
};
