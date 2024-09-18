#include <iostream>
using namespace std;

int& getValue(int& x) {
    cout << "Non-const reference returned" << endl;
    return x;
}

const int& getValue(const int& x) {
    cout << "Const reference returned" << endl;
    return x;
}

int main() {
    int a = 30;
    const int b = 40;

    getValue(a) = 50; // Non-const version allows modification
    cout << "Updated a: " << a << endl;

    cout << "Const b: " << getValue(b) << endl; // Calls const version, no modification

    return 0;
}
