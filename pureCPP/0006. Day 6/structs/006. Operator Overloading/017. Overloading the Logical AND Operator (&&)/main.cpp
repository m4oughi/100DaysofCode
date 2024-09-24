#include <iostream>

struct BoolWrapper {
    bool value;

    // Overloading the logical AND operator
    bool operator&&(const BoolWrapper& other) const {
        return value && other.value;
    }
};

int main() {


    return 0;
}