#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3};

    vec.resize(5, 42); // Resize and fill with 42
    for (int v : vec) {
        std::cout << v << " ";
    }
    std::cout << "\n";

    vec.resize(2); // Resize to smaller size
    for (int v : vec) {
        std::cout << v << " ";
    }

    return 0;
}
