#include "quadrate.h"

Quadrate::Quadrate(double a) {
    this->setEdge(a);
}

double Quadrate::getEdge() {
    return edge;
}

double Quadrate::perimeter() {
    return this->edge * 4;
}

double Quadrate::square() {
    return this->edge * this->edge;
}

void Quadrate::setEdge(double a) {
    this->edge = a > 0 ? a : 1;
}
