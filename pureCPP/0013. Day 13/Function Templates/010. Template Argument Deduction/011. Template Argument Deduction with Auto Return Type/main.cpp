#include <iostream>
using namespace std;

template <typename T, typename U>
auto add(T a, U b) -> decltype(a + b) {
    return a + b;
}

int main() {
    cout << "Sum: " << add(5, 2.5) << endl;  // Deduces T as int, U as double, return type deduced as double
    return 0;
}
