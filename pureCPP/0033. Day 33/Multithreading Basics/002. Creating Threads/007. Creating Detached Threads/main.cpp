#include <iostream>
#include <thread>

void independentTask() {
    std::cout << "This thread is running independently!" << std::endl;
}

int main() {
    std::thread t1(independentTask);
    t1.detach(); // Detach the thread to run independently

    std::this_thread::sleep_for(std::chrono::seconds(1)); // Give detached thread time to complete
    std::cout << "Main thread is continuing execution..." << std::endl;
    return 0;
}
