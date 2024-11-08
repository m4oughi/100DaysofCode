#include <iostream>
#include <thread>
#include <exception>

void exceptionHandlingTask() {
    try {
        std::cout << "Thread is running." << std::endl;
        throw std::runtime_error("Error in thread");
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
    std::cout << "Thread completes after handling exception." << std::endl;
}

int main() {
    std::thread t(exceptionHandlingTask);
    t.join();

    std::cout << "Thread has terminated successfully." << std::endl;
    return 0;
}
