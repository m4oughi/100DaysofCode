#include <iostream>
#include <future>
#include <thread>

void step1(std::promise<void>& prom) {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Step 1 completed!" << std::endl;
    prom.set_value();  // Signal that step 1 is complete
}

void step2(std::future<void>& result) {
    result.get();  // Wait for step 1 to complete
    std::cout << "Step 2 started!" << std::endl;
}

int main() {
    std::promise<void> prom1;
    std::future<void> result1 = prom1.get_future();

    std::thread t1(step1, std::ref(prom1));
    std::thread t2(step2, std::ref(result1));

    t1.join();  // Wait for step 1 to complete
    t2.join();  // Wait for step 2 to complete

    return 0;
}
