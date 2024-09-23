#include <iostream>
#include <vector>
#include <algorithm>

void countMatchingElements(const std::vector<int>& vec, const std::function<bool(int)>& predicate) {
    int count = std::count_if(vec.begin(), vec.end(), predicate);
    std::cout << "Count of matching elements: " << count << std::endl;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    countMatchingElements(numbers, [](int n) {
        return n % 2 == 0; // Count even numbers
    }); // Outputs: Count of matching elements: 5

    return 0;
}
