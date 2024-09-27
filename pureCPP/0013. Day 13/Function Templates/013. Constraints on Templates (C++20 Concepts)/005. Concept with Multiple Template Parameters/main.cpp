#include <iostream>
#include <concepts>
using namespace std;

// Concept to check if two types are the same
template<typename T, typename U>
concept Same = is_same_v<T, U>;

template<Same<int> T, Same<double> U>
auto add(T a, U b) {
    return a + b;
}

int main() {
    cout << add(10, 20.5) << endl;  // Works: first argument is int, second is double
    // cout << add(10.5, 20);  // Compilation error: types don't match the constraints
    return 0;
}
