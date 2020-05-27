#include "grad_student.h"
#include <iostream>

using namespace std;

void printStInfo(string name, 
            int age, int course) {
    cout << "\nName: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Course: " << course << endl;
}

void printGradStInfo(string name, int age, 
            int course, int grYear) {
    printStInfo(name, age, course);
    cout << "Graduation year: " << grYear << endl;
}

int main() {
    auto st = Student("Pavel", 17, 1);
    printStInfo(st.getName(), 
        st.getAge(), st.getCourse()
    );
    
    auto grSt = GradStudent("Egor", 21, 1, 2019);
    printGradStInfo(grSt.getName(), grSt.getAge(), 
            grSt.getCourse(), grSt.getGradYear());
    
    return 0;
}
