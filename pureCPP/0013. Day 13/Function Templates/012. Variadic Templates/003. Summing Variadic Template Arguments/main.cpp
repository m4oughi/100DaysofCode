#include <iostream>
using namespace std;

template<typename T>
T sum(T value) {
    return value;  // Base case: only one argument remains
}

template<typename T, typename... Args>
T sum(T first, Args... args) {
    return first + sum(args...);  // Recursive summing of arguments
}

int main() {
    cout << "Sum: " << sum(1, 2, 3, 4, 5) << endl;  // Prints: Sum: 15
    cout << "Sum: " << sum(1.5, 2.5, 3.5) << endl;  // Prints: Sum: 7.5
    return 0;
}
