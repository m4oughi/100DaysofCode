#include <iostream>

void stackFunction() {
    int stackVar = 10;  // Stack allocation
    std::cout << "Stack Variable: " << stackVar << std::endl;
}  // stackVar is deallocated here

void heapFunction() {
    int* heapVar = new int(20);  // Heap allocation
    std::cout << "Heap Variable: " << *heapVar << std::endl;
    // heapVar persists beyond this function unless explicitly deleted
}

int main() {
    stackFunction();  // stackVar no longer exists after this call
    heapFunction();
    // heapVar still exists here, but we cannot access it since we didn't return or delete it

    // Potential memory leak if heapVar is not deleted
    return 0;
}