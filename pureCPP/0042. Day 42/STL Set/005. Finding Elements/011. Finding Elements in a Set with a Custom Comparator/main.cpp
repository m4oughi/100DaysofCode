#include <iostream>
#include <set>

struct CustomCompare {
    bool operator()(int a, int b) const {
        return a > b;  // Descending order
    }
};

int main() {
    std::set<int, CustomCompare> customSet = {10, 20, 30, 40};

    auto it = customSet.find(30);
    if (it != customSet.end()) {
        std::cout << "Found element: " << *it;
    } else {
        std::cout << "Element not found.";
    }
    return 0;
}
