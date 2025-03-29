#include <iostream>
#include <type_traits>

struct A { int x; };
struct B : A {};

int main() {
    std::cout << "A is pointer interconvertible base of B: "
              << std::is_pointer_interconvertible_base_of<A, B>::value << "\n";  // true
    return 0;
}
