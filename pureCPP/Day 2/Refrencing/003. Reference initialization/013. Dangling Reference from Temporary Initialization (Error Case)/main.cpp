#include <iostream>

int& getLocalReference() {
    int temp = 100;
    return temp;  // Error: Dangling reference to a local variable
}

int main() {
    int &ref = getLocalReference();  // Undefined behavior

    return 0;
}