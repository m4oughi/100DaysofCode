#include <iostream>
#include <future>
#include <vector>

int computeSum(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; ++i) sum += i;
    return sum;
}

int main() {
    std::future<int> f1 = std::async(std::launch::async, computeSum, 1, 50);
    std::future<int> f2 = std::async(std::launch::async, computeSum, 51, 100);

    int total = f1.get() + f2.get();
    std::cout << "Total Sum: " << total << "\n";
    return 0;
}
