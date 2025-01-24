#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<char> chars = {'A', 'B', 'C', 'D'};
    std::vector<int> cumulative_ascii(chars.size());

    std::inclusive_scan(chars.begin(), chars.end(), cumulative_ascii.begin(),
                       [](char a, char b) -> int { return a + b; });

    std::cout << "Inclusive Scan (Cumulative ASCII): ";
    for (int num : cumulative_ascii) {
        std::cout << num << " ";
    }
    // Output: 65 131 198 262

    return 0;
}
