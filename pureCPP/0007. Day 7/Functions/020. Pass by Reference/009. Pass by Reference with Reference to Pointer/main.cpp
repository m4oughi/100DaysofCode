#include <iostream>

void setPointer(int*& ptr, int value) {
    ptr = new int(value);
}

int main() {
    int* p = nullptr;
    setPointer(p, 42);
    std::cout << "Value pointed to by p: " << *p << std::endl;  // Shows the value set by the function
    delete p;  // Clean up
    return 0;
}
