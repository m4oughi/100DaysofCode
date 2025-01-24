#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main() {
    std::vector<int> vec = {10, 20, 30, 40, 50, 5, 15};
    double avg = std::accumulate(vec.begin(), vec.end(), 0.0) / vec.size();

    std::stable_partition(vec.begin(), vec.end(), [avg](int x) { return x >= avg; });

    auto it = std::partition_point(vec.begin(), vec.end(), [avg](int x) { return x >= avg; });

    if (it != vec.end()) {
        std::cout << "Partition point (first below-average number): " << *it << std::endl;
    } else {
        std::cout << "All numbers are above average." << std::endl;
    }

    return 0;
}
