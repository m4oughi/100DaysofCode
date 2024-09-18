#include <iostream>
using namespace std;

void display(int i) {
    cout << "Integer: " << i << endl;
}

void display(double d) {
    cout << "Double: " << d << endl;
}

int main() {
    display(10);     // Calls display(int)
    display(5.5);    // Calls display(double)
    return 0;
}
