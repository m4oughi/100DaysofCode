#include <iostream>
#include <concepts>
using namespace std;

// Concept to check if a type is integral
template<typename T>
concept Integral = std::is_integral_v<T>;

template<Integral T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add(5, 10) << endl;  // Works: both arguments are integers
    // cout << add(3.5, 2.5);  // Compilation error: arguments are not integral
    return 0;
}
