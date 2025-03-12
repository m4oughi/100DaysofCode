#include <iostream>
#include <limits>

int main() {
    std::cout << "Minimum value of long long int: " << std::numeric_limits<long long int>::min() << std::endl;
    std::cout << "Maximum value of long long int: " << std::numeric_limits<long long int>::max() << std::endl;
    return 0;
}
