#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> noisy_data = {10, 15, 12, 14, 13};
    std::vector<int> smoothed_data(noisy_data.size());

    std::adjacent_difference(noisy_data.begin(), noisy_data.end(), smoothed_data.begin(),
        [](int x, int y) { return (x + y) / 2; });

    std::cout << "Smoothed data: ";
    for (size_t i = 1; i < smoothed_data.size(); ++i) { // Skip the first element
        std::cout << smoothed_data[i] << " ";
    }
    // Output: Smoothed data: 12 13 13 13
    return 0;
}
