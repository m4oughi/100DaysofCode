#include <iostream>

const int& getTemporaryValue() {
    int temp = 100;  // Local variable, temporary object in this context
    return temp;     // Error: Returning reference to a local variable
}

int main() {
    // const int& value = getTemporaryValue(); // Compilation error
    return 0;
}
