#include <iostream>
using namespace std;

void display(int a) {
    cout << "One Integer: " << a << endl;
}

void display(int a, int b) {
    cout << "Two Integers: " << a << ", " << b << endl;
}

int main() {
    display(10);       // Calls display(int)
    display(5, 20);    // Calls display(int, int)
    return 0;
}
