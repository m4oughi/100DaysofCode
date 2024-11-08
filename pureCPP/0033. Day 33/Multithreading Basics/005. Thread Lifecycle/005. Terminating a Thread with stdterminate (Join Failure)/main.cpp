#include <iostream>
#include <thread>
#include <stdexcept>

void task() {
    std::cout << "Task started!" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
}

int main() {
    try {
        std::thread t1(task);
        throw std::runtime_error("Simulating an exception before join");

        t1.join(); // This will not be executed due to the exception
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
        std::terminate(); // Force program termination, thread still running
    }

    return 0;
}
