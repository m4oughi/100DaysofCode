#include <iostream>

struct Shape {
    double area;
};

struct Triangle : public Shape {
    double base;
    double height;
};

int main() {

    return 0;
}