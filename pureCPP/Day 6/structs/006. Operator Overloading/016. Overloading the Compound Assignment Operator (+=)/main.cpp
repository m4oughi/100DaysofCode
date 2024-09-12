#include <iostream>

struct Vector {
    int x;
    int y;

    // Overloading the compound assignment operator
    Vector& operator+=(const Vector& other) {
        x += other.x;
        y += other.y;
        return *this;
    }
};

int main() {


    return 0;
}