#include <iostream>
using namespace std;

void display(int a) {
    cout << "Integer: " << a << endl;
}

void display(int a, int b = 10) {
    cout << "Sum: " << a + b << endl;
}

int main() {
    display(5, 20);  // Calls display(int, int)
    display(5);      // Calls display(int)
    return 0;
}
