#include <iostream>

struct Base {
    int x;
};

struct Derived : private Base {
    int y;

    void setX(int value) {
        x = value; // Can access x because of private inheritance
    }

    int getX() const {
        return x;
    }
};

int main() {


    return 0;
}