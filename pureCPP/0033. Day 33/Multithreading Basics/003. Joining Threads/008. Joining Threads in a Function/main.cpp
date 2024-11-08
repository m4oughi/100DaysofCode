#include <iostream>
#include <thread>

void createAndJoinThreads() {
    std::thread t1([]() {
        std::cout << "Thread 1 running" << std::endl;
    });
    std::thread t2([]() {
        std::cout << "Thread 2 running" << std::endl;
    });

    t1.join(); // Join threads inside function
    t2.join();
}

int main() {
    createAndJoinThreads(); // Function creates and joins threads
    return 0;
}
