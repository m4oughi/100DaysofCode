#include <iostream>

void setValue(int** ptr) {
    *ptr = new int(100);  // Allocate and set value
}

int main() {
    int* p = nullptr;
    setValue(&p);
    std::cout << "Value pointed to by p: " << *p << std::endl;  // Shows the value set by the function
    delete p;  // Clean up
    return 0;
}
