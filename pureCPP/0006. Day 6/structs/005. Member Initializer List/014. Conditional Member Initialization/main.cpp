#include <iostream>

struct OptionalValue {
    int value;
    bool isValid;

    // Member initializer list with conditional logic
    OptionalValue(int v, bool valid) : value(valid ? v : 0), isValid(valid) {}
};

int main() {


    return 0;
}