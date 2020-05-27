#include "student.h"

class GradStudent : public Student {
    int gradYear;
public:
    GradStudent(string n, int a, int c, int y) :
        Student(n, a, c) {
        setGradYear(y);
    }
    
    void setGradYear(int year) {
        gradYear = year < 2020 && year > 1960 ? year : 2019;
    }
    
    int getGradYear() {
        return gradYear;
    }
};
