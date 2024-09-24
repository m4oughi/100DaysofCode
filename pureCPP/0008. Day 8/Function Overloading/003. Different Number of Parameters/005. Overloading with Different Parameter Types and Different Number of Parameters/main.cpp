#include <iostream>
using namespace std;

void show(int a) {
    cout << "Integer: " << a << endl;
}

void show(int a, double b) {
    cout << "Integer: " << a << ", Double: " << b << endl;
}

void show(int a, double b, char c) {
    cout << "Integer: " << a << ", Double: " << b << ", Character: " << c << endl;
}

int main() {
    show(5);                // Calls show(int)
    show(5, 6.7);           // Calls show(int, double)
    show(5, 6.7, 'A');      // Calls show(int, double, char)
    
    return 0;
}
