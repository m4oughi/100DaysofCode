#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 3, 5, 6, 7, 9};

    auto it = std::find_if(vec.begin(), vec.end(), [](int num) { return num % 2 == 0; });

    if (it != vec.end()) {
        std::cout << "First even number found: " << *it << std::endl;
    } else {
        std::cout << "No even numbers found." << std::endl;
    }

    return 0;
}
