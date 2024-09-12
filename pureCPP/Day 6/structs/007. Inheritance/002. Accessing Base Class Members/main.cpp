#include <iostream>

struct Base {
    int x;
};

struct Derived : public Base {
    int y;

    void printValues() {
        std::cout << "x: " << x << ", y: " << y << std::endl;
    }
};


int main() {


    return 0;
}