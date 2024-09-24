#include <iostream>
using namespace std;

void print(int i) {
    cout << "Integer: " << i << endl;
}

void print(double d) {
    cout << "Double: " << d << endl;
}

int main() {
    print(5);        // Calls print(int)
    print(5.67);     // Calls print(double)
    return 0;
}
