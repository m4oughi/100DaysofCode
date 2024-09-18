#include <iostream>
using namespace std;

void compute(int a, double b, char c) {
    cout << "Integer, Double, Char: " << a << ", " << b << ", " << c << endl;
}

void compute(char c, int a, double b) {
    cout << "Char, Integer, Double: " << c << ", " << a << ", " << b << endl;
}

int main() {
    compute(10, 5.5, 'A');      // Calls compute(int, double, char)
    compute('B', 20, 6.7);      // Calls compute(char, int, double)
    return 0;
}
