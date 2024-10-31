#include <iostream>
#include <new>

int main() {
    try {
        int* p = new int[1000000000000];  // Large memory allocation
    } catch (const std::bad_alloc& e) {
        std::cout << "Caught bad_alloc: " << e.what() << std::endl;
    }
    return 0;
}
