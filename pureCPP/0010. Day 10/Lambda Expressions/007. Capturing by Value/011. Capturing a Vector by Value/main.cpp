#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4};
    auto lambda = [vec]() mutable {
        vec.push_back(5);
        for (int n : vec) {
            std::cout << n << " ";
        }
        std::cout << std::endl;
    };

    lambda(); // Outputs: 1 2 3 4 5
    for (int n : vec) {
        std::cout << n << " "; // Outputs: 1 2 3 4
    }
    return 0;
}
