#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {5, 1, 4, 3, 2};

    std::sort(numbers.begin(), numbers.end()); // Ascending
    std::cout << "Ascending: ";
    for (int num : numbers) std::cout << num << " ";

    std::sort(numbers.begin(), numbers.end(), std::greater<int>()); // Descending
    std::cout << "\nDescending: ";
    for (int num : numbers) std::cout << num << " ";
    return 0;
}
