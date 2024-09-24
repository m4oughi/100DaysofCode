#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    try {
        std::for_each(numbers.begin(), numbers.end(), [](int x) {
            if (x == 3) {
                throw std::runtime_error("Number 3 encountered!");
            }
            std::cout << x << std::endl;
        });
    } catch (const std::runtime_error& e) {
        std::cout << "Caught exception: " << e.what() << std::endl; // Outputs: Caught exception: Number 3 encountered!
    }

    return 0;
}
