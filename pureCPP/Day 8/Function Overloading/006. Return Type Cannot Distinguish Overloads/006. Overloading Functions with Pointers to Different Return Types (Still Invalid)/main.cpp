#include <iostream>
using namespace std;

// Invalid overloading
int* getValue(int a) {
    static int value = a * 2;
    return &value;
}

double* getValue(int a) {
    static double value = a * 2.5;
    return &value;
}

int main() {
    int* intPtr = getValue(10);      // Ambiguous call
    double* doublePtr = getValue(10);
    cout << "Integer Value: " << *intPtr << endl;
    cout << "Double Value: " << *doublePtr << endl;
    return 0;
}
