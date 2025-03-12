#include <iostream>

class Distance {
    double meters;
public:
    Distance(double m) : meters(m) {}

    explicit operator double() const { return meters; } // Convert to meters
    explicit operator int() const { return static_cast<int>(meters); } // Convert to int meters
};

int main() {
    Distance d(123.45);

    // double meters = d; // Error
    double meters = static_cast<double>(d); // Works
    int intMeters = static_cast<int>(d); // Works

    std::cout << "Meters: " << meters << ", Integer Meters: " << intMeters << std::endl;
    return 0;
}
