#include <iostream>
#include <concepts>
using namespace std;

template<typename T>
concept Addable = requires(T a, T b) { a + b; };  // Concept that requires the addition operator

template<typename T>
concept Subtractable = requires(T a, T b) { a - b; };  // Concept that requires the subtraction operator

template<Addable T, Subtractable U>
auto calculate(T a, U b) {
    return a + b - b;
}

int main() {
    cout << calculate(5, 3) << endl;  // Works: both types satisfy the Addable and Subtractable concepts
    return 0;
}
