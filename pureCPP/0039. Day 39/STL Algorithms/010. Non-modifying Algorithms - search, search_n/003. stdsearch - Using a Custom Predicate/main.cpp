#include <iostream>
#include <vector>
#include <algorithm>

bool customCompare(int a, int b) {
    return a % 10 == b % 10; // Compare last digits
}

int main() {
    std::vector<int> vec = {12, 14, 26, 37, 48, 59};
    std::vector<int> pattern = {6, 7};

    auto it = std::search(vec.begin(), vec.end(), pattern.begin(), pattern.end(), customCompare);

    if (it != vec.end()) {
        std::cout << "Custom subsequence found starting at index: " << std::distance(vec.begin(), it) << std::endl;
    } else {
        std::cout << "Custom subsequence not found." << std::endl;
    }

    return 0;
}
