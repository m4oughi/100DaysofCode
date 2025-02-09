#include <iostream>
#include <set>

int main() {
    std::set<int> smallSet = {1, 2, 3};
    std::set<int> largeSet = {10, 20, 30, 40, 50, 60, 70};

    std::cout << "Size of smallSet: " << smallSet.size() << std::endl;
    std::cout << "Size of largeSet: " << largeSet.size() << std::endl;

    return 0;
}
