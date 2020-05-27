#include "list.h"

template<typename T>
ostream& operator<<(ostream &out, const List<T>* el) {
    while(el) {
        cout << el->val << " ";
        el = el->next;
    }
    
    return cout << endl;
}

template<typename T>
bool operator==(const List<T>& left, const List<T>& right) {
    if((!&left && &right) || (&right && !&left))
        return false;
        
    if(!&left && !&right)
        return true;

    // Для удобства обхода списка вводим переменные l и r.
    const List<T>* l = &left;
    const List<T>* r = &right;

    while(l) {
        if(!r)
            return false;
        else if(l->val != r->val)
            return false;
        else {
            l = l->next;
            r = r->next;
        }
    }
    
    return true;    
}

void completeTask() {
    List<int>* el1 = new List<int>(5);
    List<int>* el2 = new List<int>(5);
    el1->push(23);
    el2->push(23);
    
    cout << "list1: " << el1;
    cout << "list2: " << el2;
    cout <<"list1 == list2: " << 
            ((*el1 == *el2) ? "true" : "false") << endl;
    
    el2->pop();
    cout << "list2: " << el2;
    cout <<"list1 == list2: " << 
            ((*el1 == *el2) ? "true" : "false") << endl;
}

int main() {
    completeTask();
    
    return 0;
}
