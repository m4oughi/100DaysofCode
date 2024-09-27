#include <iostream>
using namespace std;

// Overloaded functions
void add(int a, int b) {
    cout << "Sum of two integers: " << a + b << endl;
}

void add(int a, int b, int c) {
    cout << "Sum of three integers: " << a + b + c << endl;
}

int main() {
    add(5, 10);         // Calls the 2-parameter overloaded function
    add(1, 2, 3);       // Calls the 3-parameter overloaded function
    return 0;
}
