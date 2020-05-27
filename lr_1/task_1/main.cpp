#include <iostream>
#include "quadrate.h"

using namespace std;

int main() {
    auto qd = Quadrate(15.7);
    cout << "a = " << qd.getEdge() << endl;
    cout << "perimeter = " << qd.perimeter() << endl;
    cout << "square = " << qd.square() << endl;
}
