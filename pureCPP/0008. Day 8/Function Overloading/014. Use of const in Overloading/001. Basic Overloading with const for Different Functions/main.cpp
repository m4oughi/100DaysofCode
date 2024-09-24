#include <iostream>
using namespace std;

void printValue(int x) {
    cout << "Non-const int: " << x << endl;
}

void printValue(const int x) {
    cout << "Const int: " << x << endl;
}

int main() {
    int a = 5;
    const int b = 10;
    
    printValue(a);   // Calls non-const version
    printValue(b);   // Calls const version

    return 0;
}
