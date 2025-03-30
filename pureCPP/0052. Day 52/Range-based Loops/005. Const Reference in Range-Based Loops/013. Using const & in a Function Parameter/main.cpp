#include <iostream>
#include <vector>

void printNumbers(const std::vector<int>& numbers) {
    for (const int& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> numbers = {5, 10, 15, 20};
    printNumbers(numbers);

    return 0;
}
