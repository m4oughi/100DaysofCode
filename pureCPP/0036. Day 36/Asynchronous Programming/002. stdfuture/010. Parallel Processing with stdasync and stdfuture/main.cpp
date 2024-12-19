#include <iostream>
#include <future>
#include <vector>
#include <numeric>

int partialSum(const std::vector<int>& data, int start, int end) {
    return std::accumulate(data.begin() + start, data.begin() + end, 0);
}

int main() {
    std::vector<int> data(1000000, 1);  // Large array of 1's
    int midpoint = data.size() / 2;

    std::future<int> sum1 = std::async(partialSum, std::ref(data), 0, midpoint);
    std::future<int> sum2 = std::async(partialSum, std::ref(data), midpoint, data.size());

    int totalSum = sum1.get() + sum2.get();  // Combine the results from both tasks
    std::cout << "Total Sum: " << totalSum << std::endl;
    return 0;
}
