#include <iostream>
#include <concepts>
using namespace std;

// Concept to check if a type is integral
template<typename T>
concept Integral = is_integral_v<T>;

template<typename T>
requires Integral<T>  // Requires clause constrains the return type
T increment(T value) {
    return value + 1;
}

int main() {
    cout << increment(10) << endl;  // Works: int is an integral type
    // cout << increment(2.5);  // Compilation error: double is not an integral type
    return 0;
}
