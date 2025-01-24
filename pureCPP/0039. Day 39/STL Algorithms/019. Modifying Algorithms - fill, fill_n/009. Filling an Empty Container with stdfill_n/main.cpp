#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec;

    std::fill_n(std::back_inserter(vec), 10, 5);

    std::cout << "Dynamically filled vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
