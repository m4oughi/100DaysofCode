#include <iostream>
using namespace std;

void print(int x) {
    cout << "Integer: " << x << endl;
}

void print(float x) {
    cout << "Float: " << x << endl;
}

int main() {
    print(static_cast<float>(10));  // Explicitly resolve to the float overload
    return 0;
}
