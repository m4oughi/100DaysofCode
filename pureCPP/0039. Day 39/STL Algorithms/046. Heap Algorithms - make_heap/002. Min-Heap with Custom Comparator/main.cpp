#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {10, 20, 15, 30, 40};
    std::make_heap(vec.begin(), vec.end(), std::greater<>{});

    std::cout << "Min-Heap: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
