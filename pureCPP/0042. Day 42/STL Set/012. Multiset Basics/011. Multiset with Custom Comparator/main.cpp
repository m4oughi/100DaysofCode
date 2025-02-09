#include <iostream>
#include <set>

struct CustomCompare {
    bool operator()(int a, int b) const {
        return (a % 10) < (b % 10);  // Sort based on last digit
    }
};

int main() {
    std::multiset<int, CustomCompare> ms = {23, 45, 12, 67, 89, 34};

    std::cout << "Multiset sorted by last digit: ";
    for (int num : ms) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
