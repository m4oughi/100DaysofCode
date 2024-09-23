#include <iostream>
#include <vector>
#include <algorithm>

void sortAndPrint(std::vector<int>& vec, const std::function<bool(int, int)>& comp) {
    std::sort(vec.begin(), vec.end(), comp);
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> numbers = {5, 3, 8, 1, 2};
    
    // Sort in ascending order
    sortAndPrint(numbers, [](int a, int b) {
        return a < b;
    }); // Outputs: 1 2 3 5 8

    // Sort in descending order
    sortAndPrint(numbers, [](int a, int b) {
        return a > b;
    }); // Outputs: 8 5 3 2 1

    return 0;
}
