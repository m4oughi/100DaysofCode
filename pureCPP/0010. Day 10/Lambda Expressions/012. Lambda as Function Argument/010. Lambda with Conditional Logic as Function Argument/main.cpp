#include <iostream>
#include <vector>

void filterNumbers(const std::vector<int>& vec, const std::function<bool(int)>& filter) {
    for (const auto& number : vec) {
        if (filter(number)) {
            std::cout << "Accepted: " << number << std::endl;
        } else {
            std::cout << "Rejected: " << number << std::endl;
        }
    }
}

int main() {
    std::vector<int> numbers = {10, 15, 20, 25, 30};
    
    filterNumbers(numbers, [](int n) {
        return n > 15; // Only accept numbers greater than 15
    });

    return 0;
}
