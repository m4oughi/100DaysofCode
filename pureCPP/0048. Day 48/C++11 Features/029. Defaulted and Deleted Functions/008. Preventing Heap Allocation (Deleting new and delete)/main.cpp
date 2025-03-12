#include <iostream>

class StackOnly {
public:
    void* operator new(size_t) = delete; // Prevent dynamic allocation
    void operator delete(void*) = delete;
};

int main() {
    StackOnly obj; // Allowed
    // StackOnly* ptr = new StackOnly(); // Error: new is deleted
    return 0;
}
