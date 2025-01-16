#include <iostream>
#include <iterator>
#include <set>
#include <vector>

int main() {
    std::vector<int> numbers = {3, 1, 4, 1, 5};
    std::set<int> uniqueNumbers;

    std::copy(numbers.begin(), numbers.end(), std::inserter(uniqueNumbers, uniqueNumbers.begin()));

    std::cout << "Set elements: ";
    for (int num : uniqueNumbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
