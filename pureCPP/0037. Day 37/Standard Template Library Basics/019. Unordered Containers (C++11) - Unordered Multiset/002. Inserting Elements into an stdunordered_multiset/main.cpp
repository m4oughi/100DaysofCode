#include <iostream>
#include <unordered_multiset>

int main() {
    std::unordered_multiset<int> numbers;
    numbers.insert(10);
    numbers.insert(20);
    numbers.insert(10);  // Duplicate insertion

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
