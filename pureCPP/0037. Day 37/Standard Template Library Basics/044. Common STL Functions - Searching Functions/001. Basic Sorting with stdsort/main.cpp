#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {10, 20, 30, 40, 50};

    auto it = std::find(vec.begin(), vec.end(), 30); // Search for 30
    if (it != vec.end())
        std::cout << "Element found at position: " << std::distance(vec.begin(), it) << "\n";
    else
        std::cout << "Element not found\n";

    return 0;
}
