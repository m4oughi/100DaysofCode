#include <iostream>
#include <cstdlib>

void* operator new(std::size_t size) {
    std::cout << "Custom new for size: " << size << std::endl;
    return std::malloc(size);
}

void operator delete(void* ptr) noexcept {
    std::cout << "Custom delete\n";
    std::free(ptr);
}

int main() {
    int* ptr = new int(42);
    std::cout << "Value: " << *ptr << std::endl;
    delete ptr;
    return 0;
}
