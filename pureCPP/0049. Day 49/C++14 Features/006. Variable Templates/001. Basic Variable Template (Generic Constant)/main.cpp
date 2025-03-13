#include <iostream>

template<typename T>
constexpr T pi = T(3.1415926535897932385);

int main() {
    std::cout << "Pi as float: " << pi<float> << std::endl;
    std::cout << "Pi as double: " << pi<double> << std::endl;
    std::cout << "Pi as long double: " << pi<long double> << std::endl;

    return 0;
}
