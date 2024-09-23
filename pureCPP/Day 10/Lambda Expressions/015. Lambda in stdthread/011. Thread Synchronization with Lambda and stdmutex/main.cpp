#include <iostream>
#include <thread>
#include <mutex>

int main() {
    int counter = 0;
    std::mutex mtx;

    auto increment = [&counter, &mtx]() {
        std::lock_guard<std::mutex> lock(mtx);
        ++counter;
        std::cout << "Counter: " << counter << std::endl;
    };

    std::thread t1(increment);
    std::thread t2(increment);

    t1.join();
    t2.join();

    return 0;
}
