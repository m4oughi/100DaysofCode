#include <iostream>
using namespace std;

void showValue(int* ptr) {
    cout << "Non-const pointer: " << *ptr << endl;
}

void showValue(const int* ptr) {
    cout << "Const pointer: " << *ptr << endl;
}

int main() {
    int x = 15;
    const int y = 25;

    showValue(&x);  // Calls non-const version
    showValue(&y);  // Calls const version

    return 0;
}
