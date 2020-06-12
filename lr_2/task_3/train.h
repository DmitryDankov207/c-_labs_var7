#pragma once
#include "freight_carrier.h"

// Класс Поезд, наследуется от Грузоперевозчика.
// Методы getTime и getCost перегружены.
class Train : public FreightCarrier{
public:
    // Конструктор копирования.
    Train(string n, string c) :
        FreightCarrier(n, c) {}

    // Возвращает цену проезда до указанного города.
    double getCost(string dest) {
        return getDistance(dest) / 10.;
    }

    // Возвращает время проезда до указанного города.     
    double getTime(string dest) {
        return getDistance(dest) / 60.;
    }

    // Возвращает цену проезда на указанное расстояние.    
    double getCost(int dist) {
        return dist / 10.;
    }

    // Возвращает время проезда на указанное расстояние.     
    double getTime(int dist) {
        return dist / 60.;
    }
};
