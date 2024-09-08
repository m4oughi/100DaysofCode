#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7};

    // Erase elements from index 2 to 4 (exclusive)
    numbers.erase(numbers.begin() + 2, numbers.begin() + 5);

    std::cout << "Elements in the vector after erasing a range:" << std::endl;
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
