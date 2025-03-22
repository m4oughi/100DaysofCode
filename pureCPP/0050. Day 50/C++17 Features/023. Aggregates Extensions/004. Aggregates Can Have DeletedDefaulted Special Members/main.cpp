#include <iostream>

struct Data {
    int value;
    Data() = default; // Still an aggregate
    Data(int v) = delete; // Cannot initialize using single int
};

int main() {
    Data d1{}; // OK, uses default constructor
    // Data d2{42}; // ERROR: Constructor is deleted
    std::cout << "d1.value: " << d1.value << "\n";
    return 0;
}
