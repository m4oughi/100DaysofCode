#include <iostream>
#include <new>

int main() {
    try {
        int* p = new int[1000000000000];  // Attempting to allocate a huge array
    } catch (const std::bad_alloc& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}
