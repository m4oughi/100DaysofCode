#include <iostream>
#include <set>

int main() {
    std::set<int> set1 = {1, 2, 3};
    std::set<int> set2 = {4, 5, 6};

    if (set1.size() == set2.size()) {
        std::cout << "Both sets have the same number of elements." << std::endl;
    } else {
        std::cout << "The sets have different sizes." << std::endl;
    }

    return 0;
}
