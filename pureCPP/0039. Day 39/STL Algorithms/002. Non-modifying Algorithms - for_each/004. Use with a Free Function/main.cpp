#include <iostream>
#include <vector>
#include <algorithm>

void printDouble(int n) {
    std::cout << n * 2 << " ";
}

int main() {
    std::vector<int> nums{1, 2, 3, 4, 5};

    std::for_each(nums.begin(), nums.end(), printDouble);
    // Output: 2 4 6 8 10
}
