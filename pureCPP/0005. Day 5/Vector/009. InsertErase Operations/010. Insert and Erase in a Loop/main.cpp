#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Insert 0 at the beginning and remove the last element
    for (int i = 0; i < 3; ++i) {
        numbers.insert(numbers.begin(), 0);
        numbers.erase(numbers.end() - 1);
    }

    std::cout << "Elements in the vector after loop insert and erase:" << std::endl;
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
