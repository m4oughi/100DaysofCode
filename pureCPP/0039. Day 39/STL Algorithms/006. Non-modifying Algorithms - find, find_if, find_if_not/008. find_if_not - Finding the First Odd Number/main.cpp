#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {2, 4, 6, 7, 8};

    auto it = std::find_if_not(vec.begin(), vec.end(), [](int num) { return num % 2 == 0; });

    if (it != vec.end()) {
        std::cout << "First odd number found: " << *it << std::endl;
    } else {
        std::cout << "No odd numbers found." << std::endl;
    }

    return 0;
}
