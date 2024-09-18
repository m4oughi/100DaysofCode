#include <iostream>
using namespace std;

void print(int i, int j = 10) {
    cout << "Integer: " << i << ", Default Integer: " << j << endl;
}

void print(double d, double e = 5.5) {
    cout << "Double: " << d << ", Default Double: " << e << endl;
}

int main() {
    print(3);           // Calls print(int, int) with default j
    print(4.2);         // Calls print(double, double) with default e
    return 0;
}
