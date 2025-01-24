#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 2, 3, 4, 2, 5};

    int countTwos = std::count(numbers.begin(), numbers.end(), 2);

    std::cout << "The number 2 appears " << countTwos << " times." << std::endl;

    return 0;
}
