#include <iostream>
const int* getPointer() {
    return &x; // Returning a pointer to a constant integer
};

int main() {
    int x = 40; 
    

    const int* ptr = getPointer();
    // *ptr = 50; // NOT allowed: modifying the value pointed to by ptr is not allowed
    // ptr = nullptr; // NOT allowed: modifying the pointer itself is not allowed
    
    return 0;
}