#include <iostream>
using namespace std;

void print(int& x) {
    cout << "Reference version: " << x << endl;
}

void print(int* x) {
    cout << "Pointer version: " << *x << endl;
}

int main() {
    int a = 10;
    int b = 20;

    print(a);    // Calls reference version
    print(&b);   // Calls pointer version

    return 0;
}
