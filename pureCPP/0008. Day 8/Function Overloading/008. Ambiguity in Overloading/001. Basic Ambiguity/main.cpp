#include <iostream>
using namespace std;

void print(int a) {
    cout << "Integer: " << a << endl;
}

void print(double a) {
    cout << "Double: " << a << endl;
}

int main() {
    print(5.0);  // Ambiguous: Can match both print(int) and print(double)
    return 0;
}
