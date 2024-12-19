#include <iostream>
#include <future>
#include <thread>

void worker(std::promise<int>& prom, bool shouldThrow) {
    if (shouldThrow) {
        prom.set_exception(std::make_exception_ptr(std::runtime_error("Worker failed")));
    } else {
        prom.set_value(42);
    }
}

int main() {
    std::promise<int> prom;
    std::shared_future<int> fut = prom.get_future();  // Create a shared future

    std::thread t1(worker, std::ref(prom), true);
    std::thread t2(worker, std::ref(prom), true);

    try {
        fut.get();  // Wait for the result or exception from any worker
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;  // Output: Worker failed
    }

    t1.join();
    t2.join();

    return 0;
}
