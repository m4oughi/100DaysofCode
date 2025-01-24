#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {10, 15, 20, 25, 30, 35};

    int rangeCount = std::count_if(numbers.begin(), numbers.end(), [](int x) {
        return x >= 15 && x <= 30;
    });

    std::cout << "There are " << rangeCount << " numbers in the range [15, 30]." << std::endl;

    return 0;
}
