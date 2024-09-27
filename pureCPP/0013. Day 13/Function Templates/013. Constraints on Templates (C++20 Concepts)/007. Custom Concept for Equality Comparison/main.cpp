#include <iostream>
#include <concepts>
using namespace std;

// Concept that requires a type to support equality comparison
template<typename T>
concept EqualityComparable = requires(T a, T b) { { a == b } -> std::convertible_to<bool>; };

template<EqualityComparable T>
bool areEqual(T a, T b) {
    return a == b;
}

int main() {
    cout << areEqual(5, 5) << endl;      // Works: integers are comparable
    cout << areEqual(3.14, 3.14) << endl;  // Works: floating-point types are comparable
    return 0;
}
