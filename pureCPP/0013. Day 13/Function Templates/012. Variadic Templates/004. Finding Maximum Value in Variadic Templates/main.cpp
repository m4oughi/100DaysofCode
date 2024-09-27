#include <iostream>
using namespace std;

template<typename T>
T maxValue(T value) {
    return value;  // Base case: only one argument remains
}

template<typename T, typename... Args>
T maxValue(T first, Args... args) {
    return (first > maxValue(args...)) ? first : maxValue(args...);  // Recursive comparison
}

int main() {
    cout << "Max: " << maxValue(10, 20, 5, 15) << endl;  // Prints: Max: 20
    cout << "Max: " << maxValue(3.5, 7.8, 2.1) << endl;  // Prints: Max: 7.8
    return 0;
}
