#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    auto it = std::find(vec.begin(), vec.end(), 3);
    if (it != vec.end()) {
        std::cout << "Element 3 found at index " << (it - vec.begin()) << "\n";
    } else {
        std::cout << "Element 3 not found.\n";
    }

    return 0;
}
