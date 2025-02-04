#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {10, 20, 30, 40};

    auto it = std::find(vec.begin(), vec.end(), 30);
    if (it != vec.end()) {
        std::cout << "Element found: " << *it << "\n";
    } else {
        std::cout << "Element not found.\n";
    }

    return 0;
}
