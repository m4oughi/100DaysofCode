#include <iostream>
#include <set>

struct CustomCompare {
    bool operator()(int a, int b) const {
        return a > b;  // Descending order
    }
};

int main() {
    std::set<int, CustomCompare> customSet = {10, 20, 30, 40};

    std::cout << "Set elements in descending order: ";
    for (int num : customSet) {
        std::cout << num << " ";
    }
    return 0;
}
