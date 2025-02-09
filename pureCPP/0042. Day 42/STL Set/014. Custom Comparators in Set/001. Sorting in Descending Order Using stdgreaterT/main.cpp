#include <iostream>
#include <set>

int main() {
    std::set<int, std::greater<int>> s = {5, 1, 4, 3, 2};

    std::cout << "Set elements in descending order: ";
    for (int num : s) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
