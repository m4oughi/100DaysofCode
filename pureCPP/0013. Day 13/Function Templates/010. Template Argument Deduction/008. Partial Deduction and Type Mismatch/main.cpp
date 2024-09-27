#include <iostream>
using namespace std;

template <typename T, typename U>
void compare(T a, U b) {
    if (a > b) {
        cout << a << " is greater than " << b << endl;
    } else {
        cout << a << " is less than or equal to " << b << endl;
    }
}

int main() {
    compare(5, 4);         // Deduces T as int, U as int
    compare(3.14, 2);      // Deduces T as double, U as int
    compare('A', 65);      // Deduces T as char, U as int
    return 0;
}
