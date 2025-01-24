#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {10, 20, 15, 30, 40};
    std::make_heap(vec.begin(), vec.end());

    if (std::is_heap(vec.begin(), vec.end())) {
        std::cout << "The vector is a valid heap.\n";
    } else {
        std::cout << "The vector is not a valid heap.\n";
    }

    return 0;
}
