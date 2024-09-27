#include <iostream>
#include <concepts>
#include <string>
using namespace std;

template<typename T>
concept Addable = requires(T a, T b) {
    { a + b } -> convertible_to<T>;  // Ensures the result of a + b is of the same type
};

template<Addable T>
T addValues(T a, T b) {
    return a + b;
}

int main() {
    cout << addValues(5, 10) << endl;      // Works: int is addable
    cout << addValues(2.5, 3.5) << endl;   // Works: double is addable
    // cout << addValues(string("Hello"), 5);  // Compilation error: types do not match
    return 0;
}