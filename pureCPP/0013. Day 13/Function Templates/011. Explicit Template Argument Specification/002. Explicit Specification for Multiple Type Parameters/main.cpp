#include <iostream>
using namespace std;

template <typename T, typename U>
void show(T a, U b) {
    cout << "T: " << a << ", U: " << b << endl;
}

int main() {
    show<int, double>(10, 5.5);  // Explicitly specifying T as int and U as double
    show<char, float>('A', 3.14f);  // Explicitly specifying T as char and U as float
    return 0;
}
