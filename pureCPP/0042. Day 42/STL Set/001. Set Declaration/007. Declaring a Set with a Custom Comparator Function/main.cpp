#include <iostream>
#include <set>

struct CustomCompare {
    bool operator()(int a, int b) const {
        return a % 10 < b % 10; // Compare based on last digit
    }
};

int main() {
    std::set<int, CustomCompare> customSet = {21, 32, 43, 54, 65};

    std::cout << "Custom ordered set: ";
    for (int num : customSet) {
        std::cout << num << " ";
    }
    return 0;
}
