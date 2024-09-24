#include <iostream>

int& getLocalValue() {
    int temp = 100;
    return temp;  // Error: Dangling reference to local variable
}

int main () {
    int &ref = getLocalValue();  // Undefined behavior
    
    return 0;
}