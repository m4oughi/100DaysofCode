#include <iostream>
#include <algorithm>
#include <vector>

bool customCompare(int a, int b) {
    return a > b; // Descending order
}

int main() {
    std::vector<int> nums{1, 2, 3};

    std::sort(nums.begin(), nums.end(), customCompare);

    if (std::next_permutation(nums.begin(), nums.end(), customCompare)) {
        std::cout << "Next permutation with custom comparator: ";
        for (int n : nums) std::cout << n << " ";
        // Output: Next permutation with custom comparator: 3 2 1
    } else {
        std::cout << "No next permutation exists.\n";
    }
}
