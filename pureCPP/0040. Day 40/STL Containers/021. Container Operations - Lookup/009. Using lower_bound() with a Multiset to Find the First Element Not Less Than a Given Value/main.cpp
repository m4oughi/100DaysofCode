#include <iostream>
#include <set>

int main() {
    std::multiset<int> myMultiset = {10, 20, 20, 30, 40};

    // Finding the first element not less than 25
    auto it = myMultiset.lower_bound(25);

    if (it != myMultiset.end()) {
        std::cout << "Lower bound of 25: " << *it << std::endl; // 30
    } else {
        std::cout << "No element greater than or equal to 25." << std::endl;
    }

    return 0;
}
