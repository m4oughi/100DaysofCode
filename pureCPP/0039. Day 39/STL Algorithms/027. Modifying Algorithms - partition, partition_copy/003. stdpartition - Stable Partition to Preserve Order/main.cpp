#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {4, 7, 2, 9, 1, 5, 8};

    std::stable_partition(vec.begin(), vec.end(), [](int x) { return x % 2 != 0; });

    std::cout << "Stably partitioned vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
