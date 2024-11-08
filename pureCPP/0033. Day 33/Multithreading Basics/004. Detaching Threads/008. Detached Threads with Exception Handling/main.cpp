#include <iostream>
#include <thread>
#include <stdexcept>

void taskWithException() {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    throw std::runtime_error("Exception in detached thread!");
}

int main() {
    std::thread t1(taskWithException);
    t1.detach(); // Detach the thread

    std::cout << "Main thread does not catch exceptions from detached threads." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2)); // Wait for detached thread to finish
    return 0;
}
