#include <iostream>
using namespace std;

void update(int& a) {
    cout << "Update by reference: " << a << endl;
}

void update(int a) {
    cout << "Update by value: " << a << endl;
}

int main() {
    int x = 5;
    update(x);  // Ambiguous: Could call either the reference or value version
    return 0;
}
