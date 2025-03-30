#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    for (auto num : numbers) { // 'auto' deduces int
        std::cout << num << " ";
    }

    return 0;
}
