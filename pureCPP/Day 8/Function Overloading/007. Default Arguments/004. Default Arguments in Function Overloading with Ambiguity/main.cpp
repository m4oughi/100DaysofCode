#include <iostream>
using namespace std;

void display(int a) {
    cout << "Integer: " << a << endl;
}

void display(int a, int b = 10) {
    cout << "Sum: " << a + b << endl;
}

int main() {
    display(5);   // Ambiguous call
    return 0;
}
