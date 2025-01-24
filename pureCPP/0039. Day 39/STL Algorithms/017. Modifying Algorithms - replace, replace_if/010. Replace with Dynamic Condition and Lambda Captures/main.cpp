#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6};
    int threshold = 4;

    std::replace_if(vec.begin(), vec.end(), [threshold](int x) { return x > threshold; }, 99);

    std::cout << "After replace_if with lambda capture: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
