#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8};

    std::replace_if(vec.begin(), vec.end(), [](int x) { return x % 2 == 0; }, 0);

    std::cout << "After replace_if: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
