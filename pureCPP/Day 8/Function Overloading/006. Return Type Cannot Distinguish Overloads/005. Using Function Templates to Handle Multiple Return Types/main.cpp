#include <iostream>
using namespace std;

template <typename T>
T compute(int a);

template <>
int compute<int>(int a) {
    return a * 2;
}

template <>
double compute<double>(int a) {
    return a * 2.5;
}

int main() {
    int intResult = compute<int>(10);         // Calls compute<int>
    double doubleResult = compute<double>(10); // Calls compute<double>
    cout << "Integer Result: " << intResult << endl;
    cout << "Double Result: " << doubleResult << endl;
    return 0;
}
