#include <iostream>
#include <vector>
#include <algorithm>
#include <execution>
#include <random>

int main() {
    std::vector<int> data(100000);
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 100000);

    // Fill data with random numbers
    std::generate(data.begin(), data.end(), [&]() { return dis(gen); });

    // Parallel sort
    std::sort(std::execution::par, data.begin(), data.end());

    std::cout << "Data sorted (parallel sort)." << std::endl;

    return 0;
}
