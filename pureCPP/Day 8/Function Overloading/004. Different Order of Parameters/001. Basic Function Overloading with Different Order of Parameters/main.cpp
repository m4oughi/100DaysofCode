#include <iostream>
using namespace std;

void display(int a, double b) {
    cout << "Integer: " << a << ", Double: " << b << endl;
}

void display(double b, int a) {
    cout << "Double: " << b << ", Integer: " << a << endl;
}

int main() {
    display(10, 5.5);    // Calls display(int, double)
    display(5.5, 10);    // Calls display(double, int)
    return 0;
}
