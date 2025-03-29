#include <iostream>
#include <type_traits>

struct Base { int x; };
struct Derived : Base {};

int main() {
    std::cout << "Base and Derived have layout compatibility: "
              << std::is_layout_compatible<Base, Derived>::value << "\n";  // true
    return 0;
}
