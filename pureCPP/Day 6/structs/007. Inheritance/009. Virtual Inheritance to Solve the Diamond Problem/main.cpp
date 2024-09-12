#include <iostream>

struct Base {
    int x;
};

struct Derived1 : virtual public Base {
    int y;
};

struct Derived2 : virtual public Base {
    int z;
};

struct Final : public Derived1, public Derived2 {
    void print() {
        std::cout << "x: " << x << ", y: " << y << ", z: " << z << std::endl;
    }
};



int main() {


    return 0;
}