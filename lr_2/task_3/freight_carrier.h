#pragma once
#include <string>

using namespace std;

class FreightCarrier{
    static const int MINSK_MOSKOW = 718;
    static const int MINSK_KIEV = 520;
    static const int MOSKOW_KIEV = 865;
protected:
    string name;
    string city;
public:
    FreightCarrier(string n, string c) : 
        name(n), city(c) {}
    
    string getName() {
        return name;
    }
    
    string getLocation() {
        return city;
    }
    
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
