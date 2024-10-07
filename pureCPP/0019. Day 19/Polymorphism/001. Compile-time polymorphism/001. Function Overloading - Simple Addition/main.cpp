#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    cout << "Addition of integers: " << add(3, 4) << endl;    // Calls int version
    cout << "Addition of doubles: " << add(2.5, 3.6) << endl; // Calls double version
    return 0;
}
