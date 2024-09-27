#include <iostream>
using namespace std;

template <typename T1, typename T2>
void display(T1 a, T2 b) {
    cout << "Values: " << a << ", " << b << endl;
}

template <typename T1, typename T2, typename T3>
void display(T1 a, T2 b, T3 c) {
    cout << "Values: " << a << ", " << b << ", " << c << endl;
}

int main() {
    display(10, 20.5);          // 2 parameters
    display("Hello", 'A', 100);  // 3 parameters
    return 0;
}
