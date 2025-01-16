#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 15, 20, 25, 30};

    int count = std::count_if(numbers.begin(), numbers.end(), [](int n) { return n > 20; });

    std::cout << "Count of numbers greater than 20: " << count << "\n";

    return 0;
}
