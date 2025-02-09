#include <iostream>
#include <set>

int main() {
    std::set<int> set1 = {1, 2, 3};
    std::set<int> set2 = {1, 2, 4};

    if (set1 < set2) {
        std::cout << "Set1 is lexicographically smaller than Set2." << std::endl;
    } else {
        std::cout << "Set1 is not lexicographically smaller than Set2." << std::endl;
    }

    return 0;
}
