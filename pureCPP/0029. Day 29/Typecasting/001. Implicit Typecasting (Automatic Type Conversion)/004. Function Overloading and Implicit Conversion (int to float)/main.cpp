#include <iostream>
using namespace std;

void printValue(float x) {
    cout << "Float value: " << x << endl;
}

int main() {
    int a = 10;
    printValue(a);  // Implicitly converts int to float to match function parameter
    return 0;
}
