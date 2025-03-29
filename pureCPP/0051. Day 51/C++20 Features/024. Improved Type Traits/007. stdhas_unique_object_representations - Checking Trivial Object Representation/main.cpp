#include <iostream>
#include <type_traits>

struct A { int x; };   // Trivially represented
struct B { int x; float y; };  // May contain padding

int main() {
    std::cout << "A has unique object representation: " << std::has_unique_object_representations<A>::value << "\n";  // true
    std::cout << "B has unique object representation: " << std::has_unique_object_representations<B>::value << "\n";  // false
    return 0;
}
