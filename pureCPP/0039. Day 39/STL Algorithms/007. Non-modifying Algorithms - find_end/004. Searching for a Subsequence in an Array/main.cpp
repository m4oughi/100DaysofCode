#include <iostream>
#include <algorithm>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 3, 4, 5};
    int subseq[] = {3, 4};

    auto it = std::find_end(std::begin(arr), std::end(arr), std::begin(subseq), std::end(subseq));

    if (it != std::end(arr)) {
        std::cout << "Last occurrence found at index: " << std::distance(std::begin(arr), it) << std::endl;
    } else {
        std::cout << "Subsequence not found." << std::endl;
    }

    return 0;
}
