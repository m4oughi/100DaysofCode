#include <iostream>

template<int Base, int Exp>
constexpr int power = Base * power<Base, Exp - 1>;

template<int Base>
constexpr int power<Base, 0> = 1;

int main() {
    std::cout << "2^5 = " << power<2, 5> << std::endl; // Output: 32
    std::cout << "3^4 = " << power<3, 4> << std::endl; // Output: 81

    return 0;
}
