#include <iostream>
#include <thread>

void faultyTask() {
    throw std::runtime_error("Error in thread");
}

int main() {
    try {
        std::thread t1(faultyTask);
        t1.join(); // Exception won't propagate to main thread
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}
