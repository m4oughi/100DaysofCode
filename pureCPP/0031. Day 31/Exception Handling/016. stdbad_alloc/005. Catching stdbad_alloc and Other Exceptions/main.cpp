#include <iostream>
#include <stdexcept>
#include <new>

int main() {
    try {
        int* largeArray = new int[100000000000];  // Allocate a huge amount of memory
        throw std::runtime_error("Simulated runtime error");
    } catch (const std::bad_alloc& e) {
        std::cout << "Caught bad_alloc: " << e.what() << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << "Caught runtime_error: " << e.what() << std::endl;
    }
    return 0;
}
