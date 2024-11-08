#include <iostream>
#include <thread>

void task() {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Task completed!" << std::endl;
}

int main() {
    std::thread t1(task); // Thread created

    if (t1.joinable()) {  // Check if the thread can be joined
        t1.join();        // Wait for the thread to complete
    }

    std::cout << "Thread lifecycle complete!" << std::endl;
    return 0;
}
