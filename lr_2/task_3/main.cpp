#include "plane.h"
#include "train.h"
#include "automobile.h"
#include <iostream>

// Печатает инфу об объекте класса Самолет.
void printPlane() {
    Plane plane("boeing 737", "Minsk");
    
    cout << "\nVehicle name: " << plane.getName() << endl;
    cout << "Cost from " << plane.getLocation() << " to Moskow:";
    cout << plane.getCost("Moskow") << "$" << endl;
    cout << "Time from " << plane.getLocation() << " to Moskow:";
    cout << plane.getTime("Moskow") << " h" << endl;
    cout << "Cost for 1000 km: " << plane.getCost(1000) << "$" << endl;
    cout << "Time for 1000 km: " << plane.getTime(1000) << " h" << endl;     
}

// Печатает инфу об объекте класса Поезд.
void printTrain() {
    Train train("Тепловоз ТЭП70БС", "Kiev");

    cout << "\nVehicle name: " << train.getName() << endl;
    cout << "Cost from " << train.getLocation() << " to Minsk:";
    cout << train.getCost("Moskow") << "$" << endl;
    cout << "Time from " << train.getLocation() << " to Moskow:";
    cout << train.getTime("Moskow") << " h" << endl;
    cout << "Cost for 1000 km: " << train.getCost(1000) << "$" << endl;
    cout << "Time for 1000 km: " << train.getTime(1000) << " h" << endl;
}

// Печатает инфу об объекте класса Автомобиль.
void printAutomobile() {
    Automobile automobile("Toyota Camry", "Moskow");

    cout << "\nVehicle name: " << automobile.getName() << endl;
    cout << "Cost from " << automobile.getLocation() << " to Kiev:";
    cout << automobile.getCost("Kiev") << "$" << endl;
    cout << "Time from " << automobile.getLocation() << " to Kiev:";
    cout << automobile.getTime("Kiev") << " h" << endl;
    cout << "Cost for 1000 km: " << automobile.getCost(1000) << "$" << endl;
    cout << "Time for 1000 km: " << automobile.getTime(1000) << " h" << endl;
}

int main() {
    printPlane();
    printTrain();
    printAutomobile();
    
    return 0;
}
