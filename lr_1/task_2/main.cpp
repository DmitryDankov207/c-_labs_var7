#include <iostream>
#include "integer.h"

using namespace std;

const Integer& operator--(Integer& i) {
    i.val--;
    return i;
}

int arr[30];

const int* change(size_t index, int newVal) {
    arr[index] = newVal;
    return &(arr[index]);
}

void changeArr() {
    for(size_t i = 0; i < 30; i++) 
        arr[i] = i * i;
    cout << arr[10] << endl;
    cout << change(10, 20) << endl;
    cout << arr[10] << endl;
}

void incInt() {
    Integer val(7);
    cout << val.get() << endl;
    --val;
    cout << val.get() << endl;
}

int main() {
    changeArr();
    incInt();
}
