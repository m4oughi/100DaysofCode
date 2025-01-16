#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 2, 3, 3, 3, 4};
    int countOf3 = std::count(numbers.begin(), numbers.end(), 3);

    std::cout << "Count of 3: " << countOf3 << std::endl;
    return 0;
}
