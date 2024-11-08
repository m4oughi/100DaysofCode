#include <iostream>
#include <thread>

void simpleTask() {
    std::cout << "Task is running!" << std::endl;
}

int main() {
    std::thread t1(simpleTask); // Create a thread
    t1.join(); // Join the thread (wait for it to complete)
    return 0;
}
