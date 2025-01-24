#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main() {
    std::vector<double> vec = {1.1, 2.2, 3.3, 4.4, 5.5, 5.5, 5.5};
    int target = 5;

    auto it = std::search_n(vec.begin(), vec.end(), 3, target, [](double a, int b) {
        return static_cast<int>(a) == b;
    });

    if (it != vec.end()) {
        std::cout << "Found 3 consecutive elements equal to " << target << " starting at index: "
                  << std::distance(vec.begin(), it) << std::endl;
    } else {
        std::cout << "No consecutive elements found." << std::endl;
    }

    return 0;
}
