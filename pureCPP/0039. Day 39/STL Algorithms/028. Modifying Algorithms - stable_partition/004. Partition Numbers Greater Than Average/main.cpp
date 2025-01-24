#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8};

    double average = std::accumulate(vec.begin(), vec.end(), 0.0) / vec.size();

    std::stable_partition(vec.begin(), vec.end(), [average](int x) { return x > average; });

    std::cout << "Stably partitioned vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
