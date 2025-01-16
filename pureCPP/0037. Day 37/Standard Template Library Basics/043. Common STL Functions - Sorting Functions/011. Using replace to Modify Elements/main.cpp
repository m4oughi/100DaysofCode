#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 2, 4, 5};

    std::replace(vec.begin(), vec.end(), 2, 99); // Replace 2 with 99
    std::cout << "After replace: ";
    for (int v : vec) std::cout << v << " ";
    std::cout << "\n";

    return 0;
}
