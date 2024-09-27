#include <iostream>
using namespace std;

template <typename T1, typename T2>
auto add(T1 a, T2 b) -> decltype(a + b) {
    return a + b;
}

int main() {
    cout << "Sum of int and float: " << add(10, 2.5) << endl;
    cout << "Sum of double and float: " << add(2.1, 3.4f) << endl;
    return 0;
}
