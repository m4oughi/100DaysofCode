#include <iostream>
#include <list>
#include <algorithm>

int main() {
    std::list<int> lst = {10, 20, 20, 30, 40};

    auto it = std::adjacent_find(lst.begin(), lst.end());

    if (it != lst.end()) {
        std::cout << "First adjacent duplicate: " << *it << " at position: " 
                  << std::distance(lst.begin(), it) << std::endl;
    } else {
        std::cout << "No adjacent duplicates found." << std::endl;
    }

    return 0;
}
