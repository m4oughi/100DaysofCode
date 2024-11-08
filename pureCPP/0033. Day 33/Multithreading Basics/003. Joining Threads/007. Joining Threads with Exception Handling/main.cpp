#include <iostream>
#include <thread>
#include <stdexcept>

void task() {
    throw std::runtime_error("Exception in thread");
}

int main() {
    try {
        std::thread t1(task);
        t1.join(); // Exception will not propagate from the thread
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}
