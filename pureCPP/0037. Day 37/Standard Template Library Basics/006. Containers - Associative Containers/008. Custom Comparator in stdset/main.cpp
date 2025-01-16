#include <iostream>
#include <set>

struct DescendingOrder {
    bool operator()(int a, int b) const {
        return a > b;
    }
};

int main() {
    std::set<int, DescendingOrder> numbers = {1, 4, 2, 8};
    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
