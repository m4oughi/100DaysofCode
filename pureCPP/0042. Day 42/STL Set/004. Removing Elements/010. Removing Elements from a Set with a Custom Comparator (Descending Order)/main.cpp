#include <iostream>
#include <set>

struct CustomCompare {
    bool operator()(int a, int b) const {
        return a > b;  // Descending order
    }
};

int main() {
    std::set<int, CustomCompare> customSet = {10, 20, 30, 40};

    customSet.erase(30); // Removes 30

    std::cout << "Custom ordered set after removing 30: ";
    for (int num : customSet) {
        std::cout << num << " ";
    }
    return 0;
}
