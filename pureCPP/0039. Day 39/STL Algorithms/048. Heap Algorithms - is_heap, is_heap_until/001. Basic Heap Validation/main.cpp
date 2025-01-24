#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {40, 30, 20, 10, 5};

    if (std::is_heap(vec.begin(), vec.end())) {
        std::cout << "The range is a heap.\n";
    } else {
        std::cout << "The range is not a heap.\n";
    }

    return 0;
}
