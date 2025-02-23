#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums = {40, 10, 30, 20};

    std::make_heap(nums.begin(), nums.end()); // Convert vector into a heap

    std::cout << "Iterating over the heapified vector:\n";
    for (int num : nums) {
        std::cout << num << " ";
    }
    return 0;
}
