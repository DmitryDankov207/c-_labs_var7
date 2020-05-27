#include <iostream>

using namespace std;

template <typename T>
class List {
public:
    List<T>* next;
    List<T>* prev;
    T val;
    
    List<T>() {
        next = NULL;
        prev = NULL;
    }
    
    List<T>(T val) : List<T>() {
        this-> val = val;
    }
    
    ~List<T>() {
        delete next;
        delete prev;
    }
    
    // Добавление элемента в конец списка.
    void push(T val) {
        List<T>* el = new List<T>();
        el->val = val;
        el->prev = this;
        while(el->prev->next) 
            el->prev = el->prev->next;
        el->prev->next = el;
    }
    
    // Удаление элемента из конца списка.
    T pop() {
        T result;
        // Если список содержит один элемент, его значение становится 0.
        if(!this->next) {
            result = this->val;
            this->val = 0;
            return result;
        }
        
        List<T>* buff = this;
        // Получаем последний элемент списка.
        while(buff->next)
            buff = buff->next;
        
        // Удаляем последний элемент списка.
        buff = buff->prev;
        List<T>* el = buff->next;
        result = el->val;
        buff->next = NULL;
        // Чистим память.
        delete el;
        
        return result;
    }
    
    template<T>
    friend ostream& operator<<(ostream &out, const List<T>* el);
    
    template<T>
    friend bool operator==(const List<T>&, const List<T>&);
};
