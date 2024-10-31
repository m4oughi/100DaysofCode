#include <iostream>
#include <functional>
#include <thread>

void taskFunction() {
    std::cout << "Task executed in thread!" << std::endl;
}

void threadWorker(std::function<void()> func) {
    try {
        func();  // This may throw std::bad_function_call if func is empty
    } catch (const std::bad_function_call& e) {
        std::cout << "Caught std::bad_function_call in thread: " << e.what() << std::endl;
    }
}

int main() {
    std::function<void()> func = nullptr;  // Unassigned function

    // Creating a thread that tries to run an empty function
    std::thread t1(threadWorker, func);
    t1.join();

    return 0;
}
