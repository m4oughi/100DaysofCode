#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    auto lambda = [=]() {
        std::cout << "Captured vector: ";
        for (auto val : vec) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    };

    vec.push_back(6);
    lambda(); // Outputs: Captured vector: 1 2 3 4 5 (6 is not captured)
    return 0;
}
