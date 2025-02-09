#include <iostream>
#include <set>

int main() {
    std::multiset<int, std::greater<int>> ms = {5, 1, 3, 2, 4};

    std::cout << "Multiset in descending order: ";
    for (int num : ms) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
