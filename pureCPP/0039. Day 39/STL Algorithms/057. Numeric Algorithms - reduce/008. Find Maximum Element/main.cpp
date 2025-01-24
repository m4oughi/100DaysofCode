#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> vec = {10, 20, 15, 25, 5};

    int max_element = std::reduce(vec.begin(), vec.end(), INT_MIN, 
                                  [](int a, int b) { return std::max(a, b); });

    std::cout << "Maximum element: " << max_element << std::endl;
    // Output: Maximum element: 25
    return 0;
}
