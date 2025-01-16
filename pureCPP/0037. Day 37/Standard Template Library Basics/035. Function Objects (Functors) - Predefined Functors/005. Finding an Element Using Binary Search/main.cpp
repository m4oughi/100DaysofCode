#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {10, 20, 30, 40, 50};

    auto it = std::lower_bound(vec.begin(), vec.end(), 30); // Random-Access Iterator
    if (it != vec.end() && *it == 30) {
        std::cout << "Element 30 found at index: " << (it - vec.begin()) << "\n";
    } else {
        std::cout << "Element not found.\n";
    }

    return 0;
}
