#include <iostream>
#include <concepts>
using namespace std;

// Concept to check if a type is integral
template<typename T>
concept Integral = is_integral_v<T>;

// Concept to check if a type is floating point
template<typename T>
concept FloatingPoint = is_floating_point_v<T>;

template<typename T>
T process(T value) {
    if constexpr (Integral<T>) {
        return value * 2;  // Double the value if it's integral
    } else if constexpr (FloatingPoint<T>) {
        return value / 2;  // Halve the value if it's floating-point
    }
}

int main() {
    cout << process(10) << endl;       // Works: 10 is integral, result is 20
    cout << process(3.14) << endl;     // Works: 3.14 is floating-point, result is 1.57
    return 0;
}
