#include <iostream>
using namespace std;

template<typename T1, typename T2>
void combine(T1 a, T2 b) {
    cout << "Generic combine: " << a << " and " << b << endl;
}

// Specialized for two int parameters
template<>
void combine(int a, int b) {
    cout << "Specialized combine for ints: " << a + b << endl;
}

int main() {
    combine(5, 10);           // Calls specialized version for ints
    combine(5, 3.14);         // Calls generic template

    return 0;
}
