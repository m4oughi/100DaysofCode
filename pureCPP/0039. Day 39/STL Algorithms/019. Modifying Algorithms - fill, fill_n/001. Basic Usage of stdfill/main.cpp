#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec(5);

    std::fill(vec.begin(), vec.end(), 42);

    std::cout << "Filled vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
