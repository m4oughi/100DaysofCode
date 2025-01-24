#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main() {
    std::vector<double> vec = {10.5, 20.7, 30.3, 40.1};
    std::list<int> targets = {20, 30, 40};

    auto it = std::find_first_of(vec.begin(), vec.end(), targets.begin(), targets.end(), [](double a, int b) {
        return static_cast<int>(a) == b;
    });

    if (it != vec.end()) {
        std::cout << "First matching element found: " << *it << std::endl;
    } else {
        std::cout << "No matching elements found." << std::endl;
    }

    return 0;
}
