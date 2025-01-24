#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec;

    std::fill_n(std::back_inserter(vec), 5, 123);

    std::cout << "Vector after fill_n: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
