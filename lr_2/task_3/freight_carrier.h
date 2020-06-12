#pragma once
#include <string>

using namespace std;

// Класс Грузоперевозчик.
class FreightCarrier{
    // Константы расстояний между городами.
    static const int MINSK_MOSKOW = 718;
    static const int MINSK_KIEV = 520;
    static const int MOSKOW_KIEV = 865;
protected:
    // Поля класса перевозчик.
    string name; // Имя транспортного средства.
    string city; // Город, в котором он находится.
public:
    // Конструктор копирования.
    FreightCarrier(string n, string c) : 
        name(n), city(c) {}
    
    // Ниже находятся геттеры полей.
    string getName() {
        return name;
    }
    
    string getLocation() {
        return city;
    }
    
    // Принимат название города(string),
    // Реализованы кейсы для трех городов.
    // Возвращает константу расстояние между городами,
    // В случае ошибки, возвращет -1.
    double getDistance(string dest) {
        if(city == dest)
            return 0;
        else if((city == "Minsk" && dest == "Moskow") ||
            (city == "Moskow" && dest == "Minsk"))
            return MINSK_MOSKOW;
        else if((city == "Minsk" && dest == "Kiev") ||
            (city == "Kiev" && dest == "Minsk"))
            return MINSK_KIEV;
        else if((city == "Kiev" && dest == "Moskow") ||
            (city == "Moskow" && dest == "Kiev"))
            return MOSKOW_KIEV;
        else
            return -1;
    }
};
