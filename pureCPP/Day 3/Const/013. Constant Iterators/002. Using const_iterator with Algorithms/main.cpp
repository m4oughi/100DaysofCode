#include <vector>
#include <algorithm>
#include <iostream>

int main() {
    std::vector<int> vec = {10, 20, 30, 40, 50};
    
    std::vector<int>::const_iterator it = std::find(vec.cbegin(), vec.cend(), 30);
    
    if (it != vec.cend()) {
        std::cout << "Element found: " << *it << std::endl; // Prints "Element found: 30"
    }
}
