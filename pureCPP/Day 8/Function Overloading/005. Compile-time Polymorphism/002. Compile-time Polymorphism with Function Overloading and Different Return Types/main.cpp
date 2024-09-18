#include <iostream>
using namespace std;

int calculate(int a) {
    return a * a;
}

double calculate(double b) {
    return b * b;
}

int main() {
    cout << "Square of 5 (int): " << calculate(5) << endl;        // Calls calculate(int)
    cout << "Square of 5.5 (double): " << calculate(5.5) << endl; // Calls calculate(double)
    return 0;
}
