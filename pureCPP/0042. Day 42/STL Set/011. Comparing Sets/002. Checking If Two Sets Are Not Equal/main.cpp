#include <iostream>
#include <set>

int main() {
    std::set<int> set1 = {1, 2, 3};
    std::set<int> set2 = {1, 2, 4};

    if (set1 != set2) {
        std::cout << "The sets are not equal." << std::endl;
    } else {
        std::cout << "The sets are equal." << std::endl;
    }

    return 0;
}
