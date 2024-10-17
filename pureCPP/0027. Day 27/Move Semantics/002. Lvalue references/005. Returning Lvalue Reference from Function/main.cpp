#include <iostream>

int& getReference(int &ref) {
    return ref;  // Returns an Lvalue reference
}

int main() {
    int x = 42;
    int &y = getReference(x);  // y binds to the same Lvalue x
    y = 100;
    std::cout << x;  // Prints 100

    return 0;
}
