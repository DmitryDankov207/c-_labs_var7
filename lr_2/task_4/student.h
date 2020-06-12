#include "person.h"

// Класс Student, наследуется от абстрактоного класса Person.
class Student : virtual public Person {
    // Поля класса.
    string name;
    int age;
    int course;
public:
    // Конструктор.
    Student(string n, int a, int c) {
        setName(n);
        setAge(a);
        setCourse(c);
    }
    
    // Сеттер имени, проверяющий строку на пустоту.
    void setName(string name) {
        this->name = name != "" ? name : "None";
    }

    // Сеттер возраста, проверяющий возраст на правдоподобность.    
    void setAge(int age) {
        this->age = age >= 0 ? age : 0;
    }
    
    // Сеттер курса, проверяющий курса на правдоподобность.      
    void setCourse(int course) {
        if(course < 1)
            this->course = 1;
        else if(course > 6)
            this->course = -1;
        else 
            this->course = course;
    }
    
    // Геттеры полей.

    int getCourse() {
        return course;
    }
    
    string getName() {
        return name;
    }
    
    int getAge() {
        return age;
    }
};
