#include <string>

using namespace std;

class Person {
public:    
    virtual void setName(string) = 0;
    
    virtual void setAge(int) = 0;
    
    virtual void setCourse(int) = 0;
    
    virtual void setGradYear(int) {}
    
    virtual string getName() = 0;
    
    virtual int getAge() = 0;
    
    virtual int getCourse() = 0;
    
    virtual int getGradYear() { return -1; }
};
