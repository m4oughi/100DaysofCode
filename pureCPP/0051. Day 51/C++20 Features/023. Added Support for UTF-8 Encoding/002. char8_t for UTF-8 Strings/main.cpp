#include <iostream>

int main() {
    const char8_t* utf8_str = u8"Hello, 🌍!";  // Using char8_t
    std::cout << reinterpret_cast<const char*>(utf8_str) << "\n";
    return 0;
}
