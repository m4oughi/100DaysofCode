#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {50, 30, 20, 40, 10};
    std::make_heap(vec.begin(), vec.end());
    std::sort_heap(vec.begin(), vec.end());

    if (std::is_sorted(vec.begin(), vec.end())) {
        std::cout << "The range is sorted: ";
        for (int num : vec) {
            std::cout << num << " ";
        }
        std::cout << "\n";
    } else {
        std::cout << "The range is not sorted.\n";
    }

    return 0;
}
