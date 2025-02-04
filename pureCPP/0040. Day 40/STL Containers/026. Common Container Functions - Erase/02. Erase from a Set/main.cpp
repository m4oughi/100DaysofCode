#include <iostream>
#include <set>

int main() {
    std::set<int> mySet = {10, 20, 30, 40};

    // Erase element 20
    mySet.erase(20);

    // Output the set after erase
    std::cout << "Set after erase: ";
    for (int val : mySet) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
