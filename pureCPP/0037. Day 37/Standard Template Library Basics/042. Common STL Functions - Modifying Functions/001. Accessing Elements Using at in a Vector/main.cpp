#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {10, 20, 30, 40};

    std::cout << "Element at index 2: " << vec.at(2) << "\n";

    try {
        std::cout << "Trying out-of-range access: " << vec.at(5) << "\n";
    } catch (const std::out_of_range& e) {
        std::cout << "Exception caught: " << e.what() << "\n";
    }

    return 0;
}
