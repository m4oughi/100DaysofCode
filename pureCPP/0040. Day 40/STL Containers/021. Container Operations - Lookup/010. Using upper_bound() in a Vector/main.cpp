#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {10, 20, 30, 40, 50};

    // Finding the first element greater than 30
    auto it = std::upper_bound(vec.begin(), vec.end(), 30);

    if (it != vec.end()) {
        std::cout << "Upper bound of 30: " << *it << std::endl; // 40
    } else {
        std::cout << "No element greater than 30." << std::endl;
    }

    return 0;
}
