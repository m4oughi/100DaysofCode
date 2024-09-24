#include <iostream>

int main() {
    int d = 240;

    auto getValue = [&]() -> const int& { // Lambda returning a constant reference
        return d;
    };

    const int& ref = getValue();
    // ref = 250; // NOT allowed: modifying the value through the reference is not allowed

    return 0;
}