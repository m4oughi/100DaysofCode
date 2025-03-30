#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    for (const auto& num : numbers) { // Read-only access
        std::cout << num << " ";
    }

    return 0;
}
