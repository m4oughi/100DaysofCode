#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> mySet = {5, 10, 15, 20};

    // Erase element 15
    mySet.erase(15);

    // Output the unordered set after erase
    std::cout << "Unordered Set after erase: ";
    for (int val : mySet) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}
