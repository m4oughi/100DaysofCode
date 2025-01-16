#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    auto it1 = vec.begin() + 1;
    auto it2 = vec.end() - 1;

    std::cout << "Distance between it1 and it2: " << std::distance(it1, it2) << "\n";

    return 0;
}
