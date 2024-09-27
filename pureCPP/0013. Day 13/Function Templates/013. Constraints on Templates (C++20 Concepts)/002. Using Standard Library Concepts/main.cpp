#include <iostream>
#include <concepts>
using namespace std;

// Using a standard concept to constrain a template to floating-point types
template<std::floating_point T>
T multiply(T a, T b) {
    return a * b;
}

int main() {
    cout << multiply(2.5, 3.5) << endl;  // Works: arguments are floating-point
    // cout << multiply(2, 3);  // Compilation error: arguments are not floating-point
    return 0;
}
