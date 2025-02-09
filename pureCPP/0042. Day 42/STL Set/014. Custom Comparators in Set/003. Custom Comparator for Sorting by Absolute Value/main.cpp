#include <iostream>
#include <set>
#include <cmath>

struct AbsCompare {
    bool operator()(int a, int b) const {
        return std::abs(a) < std::abs(b);
    }
};

int main() {
    std::set<int, AbsCompare> s = {-5, 3, -2, 4, -1};

    std::cout << "Set elements sorted by absolute value: ";
    for (int num : s) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
