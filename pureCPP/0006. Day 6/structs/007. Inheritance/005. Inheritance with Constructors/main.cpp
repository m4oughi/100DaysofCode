#include <iostream>

struct Base {
    int x;

    Base(int val) : x(val) {}
};

struct Derived : public Base {
    int y;

    Derived(int val1, int val2) : Base(val1), y(val2) {}

    void printValues() {
        std::cout << "x: " << x << ", y: " << y << std::endl;
    }
};

int main() {


    return 0;
}