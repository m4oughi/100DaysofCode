#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    double a = 1.1, b = 2.2;

    swapValues(x, y);
    swapValues(a, b);

    cout << "Swapped integers: " << x << ", " << y << endl;
    cout << "Swapped doubles: " << a << ", " << b << endl;

    return 0;
}
