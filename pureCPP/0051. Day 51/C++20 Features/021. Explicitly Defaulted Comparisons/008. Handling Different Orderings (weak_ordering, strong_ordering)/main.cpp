#include <iostream>
#include <compare>

struct Version {
    int major, minor;

    std::weak_ordering operator<=>(const Version&) const = default;
};

int main() {
    Version v1{1, 2}, v2{1, 3};

    std::cout << std::boolalpha;
    std::cout << (v1 < v2) << "\n";  // true

    return 0;
}
