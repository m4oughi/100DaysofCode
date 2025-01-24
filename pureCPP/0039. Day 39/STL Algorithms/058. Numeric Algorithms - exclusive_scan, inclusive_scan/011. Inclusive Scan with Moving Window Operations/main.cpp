#include <iostream>
#include <vector>
#include <numeric>
#include <deque>

int main() {
    std::vector<int> data = {1, 2, 3, 4, 5};
    int window_size = 3;
    std::vector<int> moving_sum;

    // Calculate inclusive_scan
    std::vector<int> inclusive_result(data.size());
    std::inclusive_scan(data.begin(), data.end(), inclusive_result.begin());

    // Compute moving sums using inclusive_scan results
    for (size_t i = window_size - 1; i < inclusive_result.size(); ++i) {
        if (i >= window_size) {
            moving_sum.push_back(inclusive_result[i] - inclusive_result[i - window_size]);
        } else {
            moving_sum.push_back(inclusive_result[i]);
        }
    }

    std::cout << "Moving Sum (Window Size " << window_size << "): ";
    for (int sum : moving_sum) {
        std::cout << sum << " ";
    }
    // Output: 6 9 12

    return 0;
}
