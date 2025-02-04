#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {10, 20, 30, 40, 50};

    // Access using []
    vec[0] = 100;

    // Access using .at()
    vec.at(1) = 200;

    // Access using iterators
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        *it += 1;
    }

    for (int i : vec) {
        std::cout << i << " ";
    }

    return 0;
}
