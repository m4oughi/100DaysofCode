#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7};

    std::reverse(vec.begin() + 2, vec.begin() + 5); // Reverse elements 3, 4, 5

    std::cout << "Vector after reversing subrange: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
