#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

int main() {
    std::list<int> lst = {10, 20, 30, 40, 50};
    std::vector<int> targets = {25, 30, 35};

    auto it = std::find_first_of(lst.begin(), lst.end(), targets.begin(), targets.end());

    if (it != lst.end()) {
        std::cout << "First matching element found: " << *it << std::endl;
    } else {
        std::cout << "No matching elements found." << std::endl;
    }

    return 0;
}
