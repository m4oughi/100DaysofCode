#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 5};

    std::vector<int> newNumbers = {3, 4};

    // Insert newNumbers into numbers at index 2
    numbers.insert(numbers.begin() + 2, newNumbers.begin(), newNumbers.end());

    std::cout << "Elements in the vector after inserting elements with iterators:" << std::endl;
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
