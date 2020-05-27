#include <string>
#include <stdexcept>
#include <cstring>
#include <cmath>

using namespace std;

class Worker {
    string name;
    string position;
    double salary;
public:
    Worker(string name, string pos, double salary) {
        setName(name);
        setPosition(pos);
        setSalary(salary);
    }
    
    // Исключение выскакивает, если имя содержит символы.
    void setName(string name) {
        for(auto ch : name) {
            switch((int)ch) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
                throw invalid_argument("Name shouldn't include digits!");
                break;
            default:
                this->name = name;
                break;
            }
        }
    }
    
    // Исключение выскакивает, если в названии позиции меньше 4 символов.
    void setPosition(string position) {
        if(position.length() < 4)
            throw invalid_argument("Name of position should be larger then 3 symbols!");
        else
            this->position = position;
    }
    
    // Setter округляет зарабаток до двух знаков после запятой.
    // Если заработок <= 0, выскакивает исключение.
    void setSalary(double salary) {
        if(salary <= 0)
            throw invalid_argument("Salary should be larger then 0!");
        this->salary = roundf(salary * 100) / 100.;
    }

    string getName() {
        return this->name;
    }

    string getPosition() {
        return this->position;
    }
    
    double getSalary() {
        return this->salary;
    }
};
