#include <iostream>
using namespace std;

template <typename T1, typename T2>
auto add(T1 a, T2 b) -> decltype(a + b) {
    return a + b;
}

int main() {
    cout << "Addition of int and double: " << add(5, 2.5) << endl;  // int + double
    cout << "Addition of double and float: " << add(3.3, 4.4f) << endl;  // double + float
    return 0;
}
