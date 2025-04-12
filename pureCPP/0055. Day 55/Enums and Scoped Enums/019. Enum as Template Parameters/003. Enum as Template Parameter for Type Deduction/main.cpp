#include <iostream>

enum class Speed {
    Slow,
    Medium,
    Fast
};

template <Speed S>
struct Car;

template <>
struct Car<Speed::Slow> {
    void drive() {
        std::cout << "Driving slow\n";
    }
};

template <>
struct Car<Speed::Medium> {
    void drive() {
        std::cout << "Driving at medium speed\n";
    }
};

template <>
struct Car<Speed::Fast> {
    void drive() {
        std::cout << "Driving fast\n";
    }
};

int main() {
    Car<Speed::Slow> slowCar;
    slowCar.drive();  // Output: Driving slow

    Car<Speed::Medium> mediumCar;
    mediumCar.drive();  // Output: Driving at medium speed

    Car<Speed::Fast> fastCar;
    fastCar.drive();  // Output: Driving fast

    return 0;
}
