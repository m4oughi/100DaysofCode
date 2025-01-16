#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> numbers;
    numbers.insert(10);
    numbers.insert(20);
    numbers.insert(10);  // Duplicate; will be ignored

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
