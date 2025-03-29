#include <iostream>

int main() {
#if defined(__cpp_modules)
    std::cout << "C++ Modules are supported!\n";
#elif defined(__cpp_modules_ts)
    std::cout << "C++ Modules (Technical Specification) are supported!\n";
#else
    std::cout << "Modules are NOT supported.\n";
#endif
    return 0;
}
