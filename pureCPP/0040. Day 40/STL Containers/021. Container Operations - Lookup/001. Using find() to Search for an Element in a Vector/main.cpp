#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {10, 20, 30, 40};

    // Searching for element 30
    auto it = std::find(vec.begin(), vec.end(), 30);
    
    if (it != vec.end()) {
        std::cout << "Element found: " << *it << std::endl; // Element found: 30
    } else {
        std::cout << "Element not found." << std::endl;
    }

    return 0;
}
