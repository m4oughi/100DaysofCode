#include <iostream>
#include <type_traits>

struct A {};
struct B { operator A() noexcept {} };  // No-throw conversion

int main() {
    std::cout << "B -> A is nothrow convertible: " << std::is_nothrow_convertible<B, A>::value << "\n";  // true
    std::cout << "int -> double is nothrow convertible: " << std::is_nothrow_convertible<int, double>::value << "\n";  // true
    return 0;
}
