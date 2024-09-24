#include <iostream>
using namespace std;

void show(int* p) {
    cout << "Pointer to Integer: " << *p << endl;
}

void show(double* p) {
    cout << "Pointer to Double: " << *p << endl;
}

int main() {
    int i = 5;
    double d = 5.67;
    show(&i);           // Calls show(int*)
    show(&d);           // Calls show(double*)
    return 0;
}
