#include <iostream>
using namespace std;

namespace MathOperations {
    void print(int x) {
        cout << "Integer: " << x << endl;
    }
}

namespace StringOperations {
    void print(const char* str) {
        cout << "String: " << str << endl;
    }
}

int main() {
    MathOperations::print(42);      // Calls MathOperations::print
    StringOperations::print("Hello"); // Calls StringOperations::print
    return 0;
}
