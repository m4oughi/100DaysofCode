#include <iostream>
#include <new>

int main() {
    try {
        for (int i = 0; i < 10; ++i) {
            int* largeArray = new int[100000000000];
            std::cout << "Memory allocated for iteration: " << i << std::endl;
        }
    } catch (const std::bad_alloc& e) {
        std::cout << "Memory allocation failed during loop: " << e.what() << std::endl;
    }
    return 0;
}
