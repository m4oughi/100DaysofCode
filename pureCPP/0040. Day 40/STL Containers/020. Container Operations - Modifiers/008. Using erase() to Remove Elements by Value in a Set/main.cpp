#include <iostream>
#include <set>

int main() {
    std::set<int> mySet = {10, 20, 30, 40};

    // Erase element by value
    mySet.erase(20);

    std::cout << "Set after erase: ";
    for (int n : mySet) std::cout << n << " "; // 10 30 40

    return 0;
}
