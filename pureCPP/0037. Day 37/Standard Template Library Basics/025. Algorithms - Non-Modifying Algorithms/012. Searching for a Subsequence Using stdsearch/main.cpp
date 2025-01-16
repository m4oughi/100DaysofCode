#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
    std::vector<int> subseq = {3, 4, 5};

    auto it = std::search(vec.begin(), vec.end(), subseq.begin(), subseq.end());
    if (it != vec.end()) {
        std::cout << "Subsequence starts at index " << (it - vec.begin()) << "\n";
    } else {
        std::cout << "Subsequence not found.\n";
    }

    return 0;
}
