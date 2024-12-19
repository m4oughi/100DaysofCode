#include <iostream>
#include <future>
#include <vector>

int compute(int x) {
    return x * x;
}

int main() {
    std::vector<std::future<int>> futures;
    for (int i = 1; i <= 5; ++i) {
        futures.push_back(std::async(compute, i));
    }

    for (auto& fut : futures) {
        std::cout << "Result: " << fut.get() << std::endl;
    }
    return 0;
}
