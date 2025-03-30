#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    for (auto& num : numbers) { // `&` allows modifying elements
        num *= 2;
    }

    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
