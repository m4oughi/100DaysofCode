#include <iostream>
#include <set>

int main() {
    std::set<int, std::greater<int>> descSet = {10, 20, 5, 15};

    std::cout << "Set elements in descending order: ";
    for (int num : descSet) {
        std::cout << num << " ";
    }
    return 0;
}
