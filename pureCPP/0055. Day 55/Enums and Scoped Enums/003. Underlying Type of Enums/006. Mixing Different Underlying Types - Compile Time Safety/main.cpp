#include <iostream>

enum class A : int {};
enum class B : unsigned {};

int main() {
    A a = static_cast<A>(1);
    B b = static_cast<B>(1);

    // if (a == b) {} // ❌ Error: Different types even though values match
}
