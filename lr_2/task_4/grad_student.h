#include "student.h"

// Класс GradStudent, наследуется от класса Student.
class GradStudent : public Student {
    int gradYear; // Дата выпуска.
public:
    // Конструктор.
    GradStudent(string n, int a, int c, int y) :
        Student(n, a, c) {
        setGradYear(y);
    }
    
    // Сеттер года выпуска.
    void setGradYear(int year) {
        gradYear = year < 2020 && year > 1960 ? year : 2019;
    }
    
    // Геттер года выпуска
    int getGradYear() {
        return gradYear;
    }
};
