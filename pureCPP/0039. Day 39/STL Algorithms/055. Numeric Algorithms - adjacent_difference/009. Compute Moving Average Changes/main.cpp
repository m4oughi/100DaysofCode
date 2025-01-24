#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

int main() {
    std::vector<int> data = {10, 20, 30, 40, 50};
    std::vector<int> moving_avg(data.size());

    std::adjacent_difference(data.begin(), data.end(), moving_avg.begin(),
        [](int x, int y) { return (x + y) / 2; });

    std::cout << "Moving average changes: ";
    for (size_t i = 1; i < moving_avg.size(); ++i) { // Skip the first element
        std::cout << moving_avg[i] << " ";
    }
    // Output: Moving average changes: 15 25 35 45
    return 0;
}
