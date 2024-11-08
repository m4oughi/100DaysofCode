#include <iostream>
#include <thread>
#include <vector>
#include <numeric>

void sumPart(const std::vector<int>& data, int start, int end, int& result) {
    result = std::accumulate(data.begin() + start, data.begin() + end, 0);
}

int main() {
    std::vector<int> data(100000, 1); // Vector of 100,000 ones
    int sum1 = 0, sum2 = 0;

    std::thread t1(sumPart, std::ref(data), 0, data.size() / 2, std::ref(sum1));
    std::thread t2(sumPart, std::ref(data), data.size() / 2, data.size(), std::ref(sum2));

    t1.join();
    t2.join();

    int totalSum = sum1 + sum2;
    std::cout << "Total sum: " << totalSum << std::endl;
    return 0;
}
