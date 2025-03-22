#include <iostream>
#include <cstdlib>

class Example {
public:
    static void* operator new(std::size_t size) {
        std::cout << "Example::new called for size: " << size << std::endl;
        return std::malloc(size);
    }
    
    static void operator delete(void* ptr) noexcept {
        std::cout << "Example::delete called\n";
        std::free(ptr);
    }
};

int main() {
    Example* ex = new Example();
    delete ex;
    return 0;
}
