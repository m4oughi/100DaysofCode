#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    auto it = numbers.begin();
    for (int i = 1; i <= 3; ++i) {
        it = numbers.insert(it + i * 2 - 1, i * 100);  // Insert 100, 200, 300
    }

    std::cout << "Elements after multiple insertions:" << std::endl;
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}