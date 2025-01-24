#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {40, 30, 20, 10};
    std::make_heap(vec.begin(), vec.end());

    std::cout << "Heap after std::make_heap: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    std::sort_heap(vec.begin(), vec.end()); // Sorts the heap in ascending order
    std::cout << "Sorted heap: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
