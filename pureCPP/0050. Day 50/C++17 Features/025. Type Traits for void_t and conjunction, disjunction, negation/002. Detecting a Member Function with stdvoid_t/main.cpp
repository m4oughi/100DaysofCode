#include <iostream>
#include <type_traits>

// Primary template: Assume function doesn't exist
template <typename, typename = std::void_t<>>
struct HasPrintMethod : std::false_type {};

// Specialization: Detects if T has a `print()` method
template <typename T>
struct HasPrintMethod<T, std::void_t<decltype(std::declval<T>().print())>> : std::true_type {};

struct A { void print() { std::cout << "A::print()\n"; } };
struct B {};

int main() {
    std::cout << "A has print(): " << HasPrintMethod<A>::value << "\n";
    std::cout << "B has print(): " << HasPrintMethod<B>::value << "\n";
    return 0;
}
