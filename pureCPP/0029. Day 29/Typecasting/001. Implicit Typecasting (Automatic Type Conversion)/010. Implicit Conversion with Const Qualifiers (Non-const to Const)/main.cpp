#include <iostream>
using namespace std;

void printValue(const int& x) {
    cout << "Const value: " << x << endl;
}

int main() {
    int num = 42;
    printValue(num);  // Implicitly converts int to const int&
    return 0;
}
