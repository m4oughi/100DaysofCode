#include <iostream>
#include <set>

int main() {
    std::set<int> numbers;

    auto it = numbers.insert(numbers.begin(), 10); // Insert 10 at the best possible position
    numbers.insert(it, 20); // Using hint to insert 20
    numbers.insert(it, 30); // Using hint to insert 30

    std::cout << "Set elements: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
