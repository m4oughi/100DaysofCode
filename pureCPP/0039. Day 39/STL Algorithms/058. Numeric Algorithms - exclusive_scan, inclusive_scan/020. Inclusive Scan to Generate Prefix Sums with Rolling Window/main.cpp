#include <iostream>
#include <vector>
#include <numeric>
#include <deque>

int main() {
    std::vector<int> data = {1, 2, 3, 4, 5};
    int window_size = 3;
    std::vector<int> prefix_sum(data.size());

    std::inclusive_scan(data.begin(), data.end(), prefix_sum.begin());

    std::cout << "Prefix Sum: ";
    for (int num : prefix_sum) {
        std::cout << num << " ";
    }
    // Output: 1 3 6 10 15

    std::cout << "\nMoving Window Sums (Window Size " << window_size << "): ";
    for (size_t i = window_size - 1; i < prefix_sum.size(); ++i) {
        int window_sum = prefix_sum[i] - (i >= window_size ? prefix_sum[i - window_size] : 0);
        std::cout << window_sum << " ";
    }
    // Output: 6 9 12

    return 0;
}
