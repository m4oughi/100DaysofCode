#include <iostream>
using namespace std;

template <typename T1, typename T2>
void swapValues(T1& a, T2& b) {
    T1 temp = a;
    a = static_cast<T1>(b);   // Type cast to ensure compatibility
    b = static_cast<T2>(temp);
}

int main() {
    int a = 10;
    double b = 20.5;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    swapValues(a, b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}
