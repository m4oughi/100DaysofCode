#include <iostream>

// Global `static` inline function
inline static int sharedResource() {
    static int value = 0;
    return ++value;
}

// Regular inline function
inline int accessResource() {
    return sharedResource(); // Accesses the static inline function within the translation unit
}

int main() {
    std::cout << "accessResource(): " << accessResource() << std::endl; // Output: 1
    std::cout << "accessResource(): " << accessResource() << std::endl; // Output: 2
    return 0;
}
