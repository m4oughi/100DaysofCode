#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 4, 5};

    // Insert 3 at index 2
    numbers.insert(numbers.begin() + 2, 3);

    std::cout << "Elements in the vector after insert:" << std::endl;
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
