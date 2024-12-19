#include <iostream>
#include <future>
#include <thread>

void computePart(std::promise<int>& prom, int a, int b) {
    prom.set_value(a + b);  // Set result for this part of the computation
}

int main() {
    std::promise<int> prom1, prom2;
    std::future<int> result1 = prom1.get_future();
    std::future<int> result2 = prom2.get_future();

    std::thread t1(computePart, std::ref(prom1), 10, 20);
    std::thread t2(computePart, std::ref(prom2), 30, 40);

    // Aggregate the results from both threads
    int total = result1.get() + result2.get();

    std::cout << "Total sum: " << total << std::endl;

    t1.join();  // Wait for thread 1
    t2.join();  // Wait for thread 2
    return 0;
}
