#include <iostream>
#include <set>

struct CustomCompare {
    bool operator()(int a, int b) const {
        return a < b;  // Sort in ascending order (default behavior)
    }
};

int main() {
    std::set<int, CustomCompare> s = {10, 50, 20, 40, 30};

    std::cout << "Set elements in ascending order: ";
    for (int num : s) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
