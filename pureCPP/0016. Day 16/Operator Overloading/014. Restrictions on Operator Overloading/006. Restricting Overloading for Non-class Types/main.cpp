#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    // Invalid: Can't overload + for int directly (compilation error)
    // int operator+(int lhs, int rhs) {
    //     return lhs + rhs;
    // }

    // Must be done through a class or enum

    return 0;
}
