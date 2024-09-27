#include <iostream>
using namespace std;

template <typename T, int N>
struct Factorial {
    static const int value = N * Factorial<T, N - 1>::value;
};

template <typename T>
struct Factorial<T, 1> {
    static const int value = 1;
};

int main() {
    cout << "Factorial of 5: " << Factorial<int, 5>::value << endl;  // Output: 120
    cout << "Factorial of 3: " << Factorial<int, 3>::value << endl;  // Output: 6
    return 0;
}
