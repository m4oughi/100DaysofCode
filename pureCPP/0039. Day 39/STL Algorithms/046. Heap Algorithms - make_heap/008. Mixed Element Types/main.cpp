#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<double> vec = {1.1, 3.3, 2.2, 4.4, 5.5};
    std::make_heap(vec.begin(), vec.end());

    std::cout << "Heap with mixed floating-point numbers: ";
    for (double num : vec) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
