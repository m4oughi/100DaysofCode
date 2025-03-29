#include <iostream>

int main() {
#if defined(__cpp_lib_format) && __cpp_lib_format >= 201907
    std::cout << "std::format is available!\n";
#else
    std::cout << "std::format is NOT available!\n";
#endif
    return 0;
}
