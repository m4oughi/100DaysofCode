#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

int main() {
    std::vector<int> numbers = {7, 3, 9, 7, 4, 8, 3, 1};

    std::set<int> uniqueNumbers(numbers.begin(), numbers.end()); // Remove duplicates
    std::vector<int> sortedNumbers(uniqueNumbers.begin(), uniqueNumbers.end());

    size_t n = 3;
    std::nth_element(sortedNumbers.begin(), sortedNumbers.begin() + n - 1, sortedNumbers.end());

    std::cout << "3rd smallest unique element: " << sortedNumbers[n - 1] << "\n";
    return 0;
}
