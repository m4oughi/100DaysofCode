#include <iostream>
using namespace std;

int compute(int a) {
    return a * 2;
}

double compute(double a) {
    return a * 2.5;
}

int main() {
    int intResult = compute(10);        // Calls compute(int)
    double doubleResult = compute(10.0); // Calls compute(double)
    cout << "Integer Result: " << intResult << endl;
    cout << "Double Result: " << doubleResult << endl;
    return 0;
}
