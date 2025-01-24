#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {4, 5, 6};

    std::transform(vec1.begin(), vec1.end(), vec2.begin(), vec1.begin(), [](int a, int b) { return a * b; });

    std::cout << "Product of corresponding elements: ";
    for (int num : vec1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
