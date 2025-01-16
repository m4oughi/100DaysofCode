#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    auto it = vec.begin();
    it += 2; // Move forward by 2 positions
    std::cout << "After += 2: " << *it << "\n";

    it -= 1; // Move backward by 1 position
    std::cout << "After -= 1: " << *it << "\n";

    return 0;
}
