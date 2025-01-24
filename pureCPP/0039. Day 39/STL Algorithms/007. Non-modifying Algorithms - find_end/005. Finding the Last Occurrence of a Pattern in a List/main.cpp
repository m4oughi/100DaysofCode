#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

int main() {
    std::list<int> lst = {1, 2, 3, 4, 3, 4, 5};
    std::vector<int> subseq = {3, 4};

    auto it = std::find_end(lst.begin(), lst.end(), subseq.begin(), subseq.end());

    if (it != lst.end()) {
        std::cout << "Last occurrence found at position: " 
                  << std::distance(lst.begin(), it) << std::endl;
    } else {
        std::cout << "Subsequence not found." << std::endl;
    }

    return 0;
}
