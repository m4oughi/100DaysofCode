#include <iostream>
#include <thread>
#include <future>

void computeSquare(std::promise<int>&& prom, int value) {
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    prom.set_value(value * value);
}

int main() {
    std::promise<int> prom;
    std::future<int> fut = prom.get_future();

    std::thread t1(computeSquare, std::move(prom), 5);

    std::cout << "Square of 5 is: " << fut.get() << std::endl;
    t1.join();

    return 0;
}
