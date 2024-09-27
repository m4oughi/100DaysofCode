#include <iostream>
using namespace std;

void print(int value) {
    cout << "Integer: " << value << endl;
}

void print(double value) {
    cout << "Double: " << value << endl;
}

int main() {
    print(10);      // Calls the overloaded int version
    print(3.14);    // Calls the overloaded double version
    return 0;
}
