#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    try {
        auto it = std::find_if(numbers.begin(), numbers.end(), [](int x) {
            if (x > 3) {
                throw std::runtime_error("Value greater than 3 found!");
            }
            return false;
        });
    } catch (const std::runtime_error& e) {
        std::cout << "Caught exception: " << e.what() << std::endl; // Outputs: Caught exception: Value greater than 3 found!
    }

    return 0;
}
