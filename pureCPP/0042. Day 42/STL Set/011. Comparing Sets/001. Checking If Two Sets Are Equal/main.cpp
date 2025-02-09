#include <iostream>
#include <set>

int main() {
    std::set<int> set1 = {1, 2, 3, 4};
    std::set<int> set2 = {1, 2, 3, 4};

    if (set1 == set2) {
        std::cout << "Both sets are equal." << std::endl;
    } else {
        std::cout << "Sets are not equal." << std::endl;
    }

    return 0;
}
