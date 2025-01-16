#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30};
    numbers.insert(numbers.begin() + 1, 15);  // Insert 15 at index 1
    numbers.erase(numbers.begin());           // Remove first element

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
