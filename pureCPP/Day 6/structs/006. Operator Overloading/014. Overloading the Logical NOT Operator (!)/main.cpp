#include <iostream>

struct BoolWrapper {
    bool value;

    // Overloading the logical NOT operator
    bool operator!() const {
        return !value;
    }
};

int main() {


    return 0;
}