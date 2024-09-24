#include <iostream>

void updateValue(int *const ptr) {
    *ptr = 70; // Allowed: modifying the value pointed by ptr
    // ptr = &z; // NOT allowed: changing the pointer's target
}

int main() {
    int a = 80;
    updateValue(&a);

    return 0;
}