#include <iostream>
using namespace std;

void printInt(int x) {
    cout << "Integer value: " << x << endl;
}

int main() {
    double value = 5.75;
    printInt(value);  // Narrowing conversion from double to int

    return 0;
}
