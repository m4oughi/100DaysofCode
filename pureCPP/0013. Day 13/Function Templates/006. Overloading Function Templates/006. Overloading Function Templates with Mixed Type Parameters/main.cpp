#include <iostream>
using namespace std;

template <typename T1, typename T2>
void display(T1 a, T2 b) {
    cout << "Template with two types: " << a << ", " << b << endl;
}

// Overloaded version with specific types
void display(int a, double b) {
    cout << "Overloaded for int and double: " << a << ", " << b << endl;
}

int main() {
    display(5, 3.14);       // Calls overloaded int, double version
    display(10, "Hello");   // Calls generic template with two types
    return 0;
}
