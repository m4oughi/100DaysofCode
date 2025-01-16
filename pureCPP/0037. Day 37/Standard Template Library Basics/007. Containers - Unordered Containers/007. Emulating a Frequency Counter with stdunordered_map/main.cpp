#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 2, 3, 3, 3};
    std::unordered_map<int, int> frequency;

    for (int num : nums) {
        frequency[num]++;
    }

    for (const auto &entry : frequency) {
        std::cout << entry.first << " occurs " << entry.second << " times.\n";
    }
    return 0;
}
