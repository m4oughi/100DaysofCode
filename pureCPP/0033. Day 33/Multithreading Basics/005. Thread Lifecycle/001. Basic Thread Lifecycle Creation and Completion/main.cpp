#include <iostream>
#include <thread>

void task() {
    std::cout << "Task is running!" << std::endl;
}

int main() {
    std::thread t1(task); // Thread created
    t1.join();            // Wait for the thread to complete

    std::cout << "Thread has completed!" << std::endl;
    return 0;
}
