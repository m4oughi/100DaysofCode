#include <iostream>
using namespace std;

void printInt(int x) {
    cout << "Integer: " << x << endl;
}

void printFloat(float y) {
    cout << "Float: " << y << endl;
}

int main() {
    void (*funcPtr)(int) = printInt;

    // Reinterpret the function pointer to another type
    void (*newFuncPtr)(float) = reinterpret_cast<void(*)(float)>(funcPtr);
    
    // Calling the reinterpreted function pointer (unsafe)
    newFuncPtr(3.14f);  // Undefined behavior (treats float as int)
    return 0;
}
