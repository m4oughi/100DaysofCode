#include <iostream>
#include <thread>

void task() {
    std::cout << "Thread task running!" << std::endl;
}

int main() {
    std::thread t1(task);

    if (t1.joinable()) { // Check if the thread is joinable
        std::cout << "Thread is joinable, joining..." << std::endl;
        t1.join();
    }

    return 0;
}
