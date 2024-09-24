#include <iostream>
using namespace std;

void handle(int* p) {
    cout << "Handling integer pointer" << endl;
}

void handle(double* p) {
    cout << "Handling double pointer" << endl;
}

int main() {
    int x = 10;
    double y = 5.5;

    handle(&x);  // Calls handle(int*)
    handle(&y);  // Calls handle(double*)
    return 0;
}
