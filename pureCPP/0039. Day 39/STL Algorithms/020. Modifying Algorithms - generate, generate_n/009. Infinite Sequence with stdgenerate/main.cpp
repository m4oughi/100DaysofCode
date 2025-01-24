#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec(10);
    int current = 1;

    for (int i = 0; i < 3; ++i) { // Generate chunks of 10 elements
        std::generate(vec.begin(), vec.end(), [&current]() { return current++; });

        std::cout << "Generated chunk: ";
        for (int val : vec) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
