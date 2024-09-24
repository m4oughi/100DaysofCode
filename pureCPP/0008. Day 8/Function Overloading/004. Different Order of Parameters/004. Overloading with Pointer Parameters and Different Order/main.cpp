#include <iostream>
using namespace std;

void modify(int* p, double* q) {
    *p += 10;
    *q += 5.5;
    cout << "Modified int: " << *p << ", Modified double: " << *q << endl;
}

void modify(double* q, int* p) {
    *q += 10.5;
    *p += 20;
    cout << "Modified double: " << *q << ", Modified int: " << *p << endl;
}

int main() {
    int a = 10;
    double b = 20.0;
    
    modify(&a, &b);      // Calls modify(int*, double*)
    modify(&b, &a);      // Calls modify(double*, int*)
    return 0;
}
