#include <iostream>
using namespace std;

template <typename T1, typename T2>
auto subtract(T1 a, T2 b) -> decltype(a - b) {
    return a - b;
}

int main() {
    cout << "Subtracting int and double: " << subtract(10, 4.5) << endl;  // int - double
    cout << "Subtracting float and int: " << subtract(5.5f, 2) << endl;  // float - int
    return 0;
}
