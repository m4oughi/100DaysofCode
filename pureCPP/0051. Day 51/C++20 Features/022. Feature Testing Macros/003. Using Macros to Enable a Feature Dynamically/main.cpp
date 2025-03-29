#include <iostream>

#if defined(__cpp_lib_three_way_comparison)
    #include <compare>
#endif

int main() {
#if defined(__cpp_lib_three_way_comparison)
    std::cout << "Three-way comparison is available!\n";
#else
    std::cout << "Three-way comparison is NOT available!\n";
#endif
    return 0;
}
