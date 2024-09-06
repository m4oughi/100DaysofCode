#include <iostream>

int& getLocalRef() {
    int temp = 100;
    return temp;  // Error: Dangling reference to local variable
}

int main() {
    int &ref = getLocalRef();  // Undefined behavior

    return 0;
}