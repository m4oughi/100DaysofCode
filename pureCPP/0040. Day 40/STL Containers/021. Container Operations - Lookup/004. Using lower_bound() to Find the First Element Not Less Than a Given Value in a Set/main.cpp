#include <iostream>
#include <set>

int main() {
    std::set<int> mySet = {10, 20, 30, 40, 50};

    // Finding the first element not less than 35
    auto it = mySet.lower_bound(35);

    if (it != mySet.end()) {
        std::cout << "Lower bound of 35: " << *it << std::endl; // 40
    } else {
        std::cout << "No element greater than or equal to 35." << std::endl;
    }

    return 0;
}
