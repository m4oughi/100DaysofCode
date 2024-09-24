#include <iostream>

inline static int staticCounter() {
    static int count = 0; // `static` local variable persists across function calls
    return ++count;
}

int main() {
    std::cout << "staticCounter(): " << staticCounter() << std::endl; // Output: 1
    std::cout << "staticCounter(): " << staticCounter() << std::endl; // Output: 2
    std::cout << "staticCounter(): " << staticCounter() << std::endl; // Output: 3
    return 0;
}
