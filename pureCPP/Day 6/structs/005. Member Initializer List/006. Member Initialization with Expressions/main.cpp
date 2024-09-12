#include <iostream>

struct Triangle {
    int base;
    int height;
    double area;

    // Member initializer list with an expression
    Triangle(int b, int h) : base(b), height(h), area(0.5 * b * h) {}
};

int main() {


    return 0;
}