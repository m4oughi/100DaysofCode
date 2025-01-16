#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    numbers.push_back(6); // Add an element at the end
    numbers.pop_back();    // Remove the last element

    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
