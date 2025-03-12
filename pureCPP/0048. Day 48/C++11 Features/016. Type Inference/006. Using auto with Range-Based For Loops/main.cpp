#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40};

    for (auto num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
