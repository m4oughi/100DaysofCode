#include <iostream>

struct Adder {
    int value;

    // Overloading the function call operator
    int operator()(int x, int y) const {
        return value + x + y;
    }
};

int main() {


    return 0;
}