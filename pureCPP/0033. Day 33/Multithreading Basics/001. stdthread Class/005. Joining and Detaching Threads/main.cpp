#include <iostream>
#include <thread>

void independentTask() {
    std::cout << "Running independently!" << std::endl;
}

int main() {
    std::thread t1(independentTask);
    t1.detach(); // Run independently

    std::cout << "Main thread continues..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1)); // Give detached thread time to finish
    return 0;
}
