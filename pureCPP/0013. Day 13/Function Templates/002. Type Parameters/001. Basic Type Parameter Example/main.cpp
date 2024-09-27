#include <iostream>
using namespace std;

template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max of two integers: " << getMax(10, 20) << endl;
    cout << "Max of two floats: " << getMax(10.5, 9.8) << endl;
    return 0;
}
