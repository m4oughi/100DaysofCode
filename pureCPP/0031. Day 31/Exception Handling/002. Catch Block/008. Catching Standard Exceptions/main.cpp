#include <iostream>
#include <vector>
#include <stdexcept>

int main() {
    std::vector<int> vec(5);
    try {
        std::cout << vec.at(10) << std::endl;  // Out-of-range access
    } catch (const std::out_of_range& e) {  // Catching standard exception
        std::cout << "Caught out_of_range exception: " << e.what() << std::endl;
    }
    return 0;
}
