#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> numbers = {10, 20, 30, 40, 50};

    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
