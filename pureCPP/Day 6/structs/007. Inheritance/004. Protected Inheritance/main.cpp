#include <iostream>

struct Base {
    int x;
};

struct Derived : protected Base {
    int y;

    void setX(int value) {
        x = value; // Accessible within Derived due to protected inheritance
    }

    int getX() const {
        return x;
    }
};

struct FurtherDerived : public Derived {
    void manipulateX() {
        x += 10; // x is accessible in FurtherDerived due to protected inheritance
    }
};

int main() {


    return 0;
}