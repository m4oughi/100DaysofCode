#include <iostream>
using namespace std;

void display(int n) {
    cout << "Value: " << n << endl;
}

int main() {
    char c = 65;
    short s = 1000;

    display(c);  // char promoted to int
    display(s);  // short promoted to int

    return 0;
}
