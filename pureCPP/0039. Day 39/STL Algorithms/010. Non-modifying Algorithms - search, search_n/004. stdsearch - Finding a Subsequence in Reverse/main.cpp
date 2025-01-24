#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6};
    std::vector<int> subseq = {3, 4};

    auto it = std::search(vec.rbegin(), vec.rend(), subseq.rbegin(), subseq.rend());

    if (it != vec.rend()) {
        std::cout << "Subsequence found in reverse starting at index: " 
                  << vec.size() - std::distance(vec.rbegin(), it) - subseq.size() << std::endl;
    } else {
        std::cout << "Subsequence not found in reverse." << std::endl;
    }

    return 0;
}
