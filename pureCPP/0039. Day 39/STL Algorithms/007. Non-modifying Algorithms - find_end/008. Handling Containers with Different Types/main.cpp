#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main() {
    std::vector<double> vec = {1.1, 2.2, 3.3, 4.4, 3.3, 4.4};
    std::list<int> subseq = {3, 4};

    auto it = std::find_end(vec.begin(), vec.end(), subseq.begin(), subseq.end(), [](double a, int b) {
        return static_cast<int>(a) == b;
    });

    if (it != vec.end()) {
        std::cout << "Last occurrence found at index: " << std::distance(vec.begin(), it) << std::endl;
    } else {
        std::cout << "Subsequence not found." << std::endl;
    }

    return 0;
}
