#include <iostream>
#include <future>
#include <thread>

void step1(std::promise<int>& prom) {
    std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate work
    prom.set_value(5);  // Set initial value
}

void step2(std::future<int>& fut, std::promise<int>& prom) {
    int val = fut.get();  // Get value from step1
    prom.set_value(val * 2);  // Double the value
}

void step3(std::future<int>& fut) {
    int val = fut.get();  // Get doubled value from step2
    std::cout << "Final result: " << val << std::endl;  // Output: 10
}

int main() {
    std::promise<int> prom1, prom2;
    std::future<int> fut1 = prom1.get_future();
    std::future<int> fut2 = prom2.get_future();

    // Chain the steps
    std::thread t1(step1, std::ref(prom1));
    std::thread t2(step2, std::ref(fut1), std::ref(prom2));
    std::thread t3(step3, std::ref(fut2));

    t1.join();
    t2.join();
    t3.join();

    return 0;
}
