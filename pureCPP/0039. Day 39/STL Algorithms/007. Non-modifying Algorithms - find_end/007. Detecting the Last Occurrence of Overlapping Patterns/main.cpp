#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 3, 4, 3, 4};
    std::vector<int> subseq = {3, 4};

    auto it = std::find_end(vec.begin(), vec.end(), subseq.begin(), subseq.end());

    if (it != vec.end()) {
        std::cout << "Last occurrence found at index: " << std::distance(vec.begin(), it) << std::endl;
    } else {
        std::cout << "Subsequence not found." << std::endl;
    }

    return 0;
}
