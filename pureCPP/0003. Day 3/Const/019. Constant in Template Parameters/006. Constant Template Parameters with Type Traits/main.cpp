#include <iostream>
#include <type_traits>

template <int N>
struct MyTrait {
    static const bool isEven = (N % 2 == 0);
};

int main() {
    std::cout << "Is 4 even? " << MyTrait<4>::isEven << std::endl; // Prints 1 (true)
    std::cout << "Is 5 even? " << MyTrait<5>::isEven << std::endl; // Prints 0 (false)
}
