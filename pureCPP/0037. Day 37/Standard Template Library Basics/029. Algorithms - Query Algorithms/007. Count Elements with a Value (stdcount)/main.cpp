#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 3, 4, 5, 3};

    int count = std::count(numbers.begin(), numbers.end(), 3);

    std::cout << "Count of 3: " << count << "\n";

    return 0;
}
