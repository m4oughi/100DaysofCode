#include <iostream>
using namespace std;

void print(int i) {
    cout << "Integer: " << i << endl;
}

void print(int i, int j) {
    cout << "Two Integers: " << i << ", " << j << endl;
}

int main() {
    print(5);        // Calls print(int)
    print(5, 10);    // Calls print(int, int)
    return 0;
}
