#include <iostream>
#include <string>

constexpr std::string getMessage() {
    // return "Hello"; ❌ ERROR: `std::string` is not a literal type.
    return {};
}

int main() {
    return 0;
}
