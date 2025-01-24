#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec(10);

    std::fill_n(vec.begin(), 5, 77);

    std::cout << "Vector after fill_n: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
