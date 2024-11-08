#include <iostream>
#include <thread>

void task(int id) {
    std::cout << "Thread " << id << " is running!" << std::endl;
}

int main() {
    std::thread t1(task, 1); // Thread 1 will be joined
    std::thread t2(task, 2); // Thread 2 will be detached

    t1.join(); // Join the first thread
    t2.detach(); // Detach the second thread

    std::cout << "Main thread continues..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1)); // Allow detached thread to run
    return 0;
}
