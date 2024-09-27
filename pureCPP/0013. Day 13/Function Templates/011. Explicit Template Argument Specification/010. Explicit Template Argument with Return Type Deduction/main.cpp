#include <iostream>
using namespace std;

template <typename T, typename U>
auto add(T a, U b) -> decltype(a + b) {
    return a + b;
}

int main() {
    cout << add<int, double>(5, 3.14) << endl;  // Explicitly specifying T as int and U as double
    return 0;
}
