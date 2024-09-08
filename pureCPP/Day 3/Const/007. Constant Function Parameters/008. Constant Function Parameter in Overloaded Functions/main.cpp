#include <iostream>

void setValue(int &val) {
    val = 140;
}

void setValue(const int &val) {
    std::cout << "Value is const: " << val << std::endl;
    // val = 150; // NOT allowed: modifying the const parameter is not allowed
}

int main() {
    int c = 160;
    const int d = 170;

    setValue(c); // Calls non-const version, modifies c
    setValue(d); // Calls const version, doesn't modify d

    return 0;
}