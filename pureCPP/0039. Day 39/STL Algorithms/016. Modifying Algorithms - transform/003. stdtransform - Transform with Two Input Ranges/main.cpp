#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {10, 20, 30, 40, 50};
    std::vector<int> result(vec1.size());

    std::transform(vec1.begin(), vec1.end(), vec2.begin(), result.begin(), [](int a, int b) { return a + b; });

    std::cout << "Result of adding two vectors: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
