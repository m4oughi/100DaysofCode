#include <iostream>
#include <vector>
#include <numeric>

class RunningSum {
    int total = 0;
public:
    int operator()(int current, int next) {
        total += next;
        return total;
    }
};

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};

    std::vector<int> results(nums.size());
    std::partial_sum(nums.begin(), nums.end(), results.begin(), RunningSum());

    std::cout << "Running totals: ";
    for (int val : results) {
        std::cout << val << " ";
    }
    std::cout << "\n";

    return 0;
}
