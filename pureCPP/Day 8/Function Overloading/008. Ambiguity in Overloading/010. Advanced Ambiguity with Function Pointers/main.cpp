#include <iostream>
using namespace std;

void execute(int a) {
    cout << "Execute with integer: " << a << endl;
}

void execute(double a) {
    cout << "Execute with double: " << a << endl;
}

int main() {
    void (*funcPtr)(int);
    funcPtr = execute;  // Ambiguous: Can point to either execute(int) or execute(double)
    funcPtr(10);        // Causes ambiguity during assignment
    return 0;
}
