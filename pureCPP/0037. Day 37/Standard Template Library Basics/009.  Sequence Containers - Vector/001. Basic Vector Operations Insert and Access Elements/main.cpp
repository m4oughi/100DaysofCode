#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3};
    numbers.push_back(4); // Add an element to the end

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
