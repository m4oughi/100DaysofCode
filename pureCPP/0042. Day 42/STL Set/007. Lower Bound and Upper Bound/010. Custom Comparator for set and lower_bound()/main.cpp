#include <iostream>
#include <set>

struct CustomCompare {
    bool operator()(int a, int b) const {
        return a > b;  // Descending order
    }
};

int main() {
    std::set<int, CustomCompare> customSet = {10, 20, 30, 40};

    auto lb = customSet.lower_bound(25);
    if (lb != customSet.end()) {
        std::cout << "Lower bound of 25: " << *lb << std::endl;
    } else {
        std::cout << "Lower bound not found.\n";
    }

    return 0;
}
