#include <iostream>
#include <vector>
#include <algorithm>
#include <execution>

int main() {
    std::vector<int> a = {1, 2, 3, 4, 5};
    std::vector<int> b = {5, 4, 3, 2, 1};
    std::vector<int> result(5);

    // Parallel transform to add elements of two vectors
    std::transform(std::execution::par, a.begin(), a.end(), b.begin(), result.begin(), [](int x, int y) {
        return x + y;
    });

    std::cout << "Result of parallel transform (element-wise addition): ";
    for (int n : result) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}
