#include <iostream>
using namespace std;

void display(int a) {
    cout << "Integer: " << a << endl;
}

void display(double b) {
    cout << "Double: " << b << endl;
}

int main() {
    display(10);    // Calls display(int)
    display(5.5);   // Calls display(double)
    return 0;
}
