#include <iostream>
using namespace std;

int sum(int a, int b = 5) {
    return a + b;
}

double sum(double a, double b = 2.5) {
    return a + b;
}

int main() {
    cout << "Sum of integers (with default): " << sum(10) << endl;
    cout << "Sum of doubles (with default): " << sum(4.5) << endl;
    return 0;
}
