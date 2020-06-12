#include <string>

using namespace std;

// Абстрактый класс Person.
class Person {
public:
    // Виртуальный метод получения даты выпуска.
    // Реализация по умолчанию возвращает -1.
    virtual int getGradYear() { return -1; }
    
    // Класс Student не реализует этот метод,
    // Поэтому мы его реализуем по умолчанию.
    virtual void setGradYear(int) {}
    
    // Чистые виртуальные методы.
    
    virtual void setName(string) = 0;
    
    virtual void setAge(int) = 0;
    
    virtual void setCourse(int) = 0;
    
    virtual string getName() = 0;
    
    virtual int getAge() = 0;
    
    virtual int getCourse() = 0;
};
