#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {5, 10, 20, 30, 40};

    if (std::is_heap(vec.begin(), vec.end(), std::greater<>{})) {
        std::cout << "The range is a min-heap.\n";
    } else {
        std::cout << "The range is not a min-heap.\n";
    }

    return 0;
}
