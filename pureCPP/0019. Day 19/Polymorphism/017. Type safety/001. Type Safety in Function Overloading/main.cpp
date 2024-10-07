#include <iostream>
using namespace std;

void print(int x) {
    cout << "Integer: " << x << endl;
}

void print(double x) {
    cout << "Double: " << x << endl;
}

int main() {
    print(5);      // Calls the integer version
    print(3.14);   // Calls the double version

    return 0;
}
