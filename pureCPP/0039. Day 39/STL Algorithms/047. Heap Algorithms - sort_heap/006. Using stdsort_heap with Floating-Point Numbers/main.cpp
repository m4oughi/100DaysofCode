#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<double> vec = {2.2, 1.1, 5.5, 3.3, 4.4};
    std::make_heap(vec.begin(), vec.end());
    std::sort_heap(vec.begin(), vec.end());

    std::cout << "Sorted floating-point numbers: ";
    for (double num : vec) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
