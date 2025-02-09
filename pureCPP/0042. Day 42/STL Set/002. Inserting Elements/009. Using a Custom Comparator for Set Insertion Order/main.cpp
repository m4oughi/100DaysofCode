#include <iostream>
#include <set>

struct CustomCompare {
    bool operator()(int a, int b) const {
        return a > b;  // Descending order
    }
};

int main() {
    std::set<int, CustomCompare> customSet;

    customSet.insert(10);
    customSet.insert(5);
    customSet.insert(15);

    std::cout << "Custom ordered set: ";
    for (int num : customSet) {
        std::cout << num << " ";
    }
    return 0;
}
