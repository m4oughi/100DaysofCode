#include <iostream>
using namespace std;

void func1() {
    cout << "This is function 1" << endl;
}

void func2() {
    cout << "This is function 2" << endl;
}

int main() {
    void (*funcPtr[2])() = {func1, func2}; // array of function pointers

    for (int i = 0; i < 2; i++) {
        funcPtr[i](); // access and invoke each function using pointer arithmetic
    }

    return 0;
}
