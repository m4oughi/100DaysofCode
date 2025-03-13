#include <iostream>
#include <vector>

auto createLambda() {
    std::vector<int> values = {1, 2, 3};

    return [vec = std::move(values)]() {
        for (int v : vec) {
            std::cout << v << " ";
        }
        std::cout << std::endl;
    };
}

int main() {
    auto lambda = createLambda();
    lambda(); // Output: 1 2 3

    return 0;
}
