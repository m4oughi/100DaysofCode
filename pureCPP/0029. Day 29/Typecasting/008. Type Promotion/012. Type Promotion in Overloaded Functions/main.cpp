#include <iostream>
using namespace std;

void print(int x) {
    cout << "Integer: " << x << endl;
}

void print(double x) {
    cout << "Double: " << x << endl;
}

int main() {
    char c = 65;    // char is promoted to int
    float f = 3.14f; // float is promoted to double

    print(c);  // Calls the integer overload
    print(f);  // Calls the double overload

    return 0;
}
