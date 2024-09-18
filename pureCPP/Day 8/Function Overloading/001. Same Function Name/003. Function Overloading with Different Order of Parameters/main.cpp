#include <iostream>
using namespace std;

void display(int i, double d) {
    cout << "Integer: " << i << ", Double: " << d << endl;
}

void display(double d, int i) {
    cout << "Double: " << d << ", Integer: " << i << endl;
}

int main() {
    display(5, 5.67);      // Calls display(int, double)
    display(5.67, 5);      // Calls display(double, int)
    return 0;
}
