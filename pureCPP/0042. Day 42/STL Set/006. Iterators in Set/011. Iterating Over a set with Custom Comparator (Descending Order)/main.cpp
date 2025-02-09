#include <iostream>
#include <set>

struct CustomCompare {
    bool operator()(int a, int b) const {
        return a > b;  // Descending order
    }
};

int main() {
    std::set<int, CustomCompare> customSet = {10, 20, 30, 40};

    std::cout << "Custom ordered set: ";
    for (auto it = customSet.begin(); it != customSet.end(); ++it) {
        std::cout << *it << " ";
    }
    return 0;
}
