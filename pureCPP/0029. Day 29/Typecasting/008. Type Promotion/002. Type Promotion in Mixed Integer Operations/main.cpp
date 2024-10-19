#include <iostream>
using namespace std;

int main() {
    short a = 30000;  // short type
    short b = 10000;  // short type
    int result = a + b;  // short is promoted to int

    cout << "Result: " << result << endl;  // 40000
    return 0;
}
