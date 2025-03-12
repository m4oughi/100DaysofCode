#include <iostream>

class Integer {
    int value;
public:
    Integer(int v) : value(v) {}

    explicit operator int() const { // Explicit conversion to int
        return value;
    }
};

int main() {
    Integer num(42);

    // int x = num; // Error: Explicit conversion prevents implicit conversion
    int x = static_cast<int>(num); // Works because explicit conversion is forced

    std::cout << "x: " << x << std::endl;
    return 0;
}
