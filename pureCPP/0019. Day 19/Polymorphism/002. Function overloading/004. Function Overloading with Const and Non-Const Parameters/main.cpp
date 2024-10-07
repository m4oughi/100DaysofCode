#include <iostream>
using namespace std;

void display(const int& x) {
    cout << "Const version: " << x << endl;
}

void display(int& x) {
    cout << "Non-const version: " << x << endl;
}

int main() {
    int a = 5;
    const int b = 10;

    display(a);  // Calls non-const version
    display(b);  // Calls const version

    return 0;
}
