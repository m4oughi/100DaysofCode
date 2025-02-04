#include <iostream>
#include <set>

int main() {
    std::set<int> mySet = {10, 20, 30, 40};

    // Checking if 20 exists in the set
    int count = mySet.count(20);
    std::cout << "Count of 20 in set: " << count << std::endl; // 1

    // Checking if 50 exists in the set
    count = mySet.count(50);
    std::cout << "Count of 50 in set: " << count << std::endl; // 0

    return 0;
}
