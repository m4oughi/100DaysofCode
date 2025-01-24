#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main() {
    std::vector<int> vec(10);
    int counter = 0;

    std::fill(vec.begin(), vec.end(), [&counter]() mutable {
        return counter += 2;
    }());

    std::cout << "Filled vector with custom values: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
