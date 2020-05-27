#include "person.h"

class Student : virtual public Person {
    string name;
    int age;
    int course;
public:
    Student(string n, int a, int c) {
        setName(n);
        setAge(a);
        setCourse(c);
    }
    
    void setName(string name) {
        this->name = name != "" ? name : "None";
    }
    
    void setAge(int age) {
        this->age = age >= 0 ? age : 0;
    }
    
    void setCourse(int course) {
        if(course < 1)
            this->course = 1;
        else if(course > 6)
            this->course = -1;
        else 
            this->course = course;
    }
    
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
