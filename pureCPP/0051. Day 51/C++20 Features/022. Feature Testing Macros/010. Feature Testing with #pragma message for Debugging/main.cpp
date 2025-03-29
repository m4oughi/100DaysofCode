#include <iostream>

#if defined(__cpp_lib_format)
    #pragma message("std::format is available. Using C++20 formatting.")
#else
    #pragma message("std::format is NOT available. Using fallback.")
#endif

int main() {
    std::cout << "Feature testing with #pragma message!\n";
    return 0;
}
