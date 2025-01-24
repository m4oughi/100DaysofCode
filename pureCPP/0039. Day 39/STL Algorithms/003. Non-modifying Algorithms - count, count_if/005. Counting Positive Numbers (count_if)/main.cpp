#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {-1, 0, 2, 5, -3, 4};

    int positiveCount = std::count_if(numbers.begin(), numbers.end(), [](int x) {
        return x > 0;
    });

    std::cout << "There are " << positiveCount << " positive numbers." << std::endl;

    return 0;
}
