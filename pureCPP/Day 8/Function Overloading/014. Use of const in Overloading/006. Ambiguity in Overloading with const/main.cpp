#include <iostream>
using namespace std;

void process(int& a) {
    cout << "Non-const reference called" << endl;
}

void process(const int& a) {
    cout << "Const reference called" << endl;
}

void process(int a) {
    cout << "Non-reference called" << endl;
}

int main() {
    int x = 10;
    const int y = 20;

    process(x); // Non-const reference
    process(y); // Const reference

    process(30); // Non-reference version

    return 0;
}
