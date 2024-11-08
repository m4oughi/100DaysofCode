#include <iostream>
#include <thread>

int main() {
    std::thread t1([]() {
        std::cout << "Lambda function running in detached thread!" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(2));
    });

    t1.detach(); // Detach the thread running the lambda

    std::cout << "Main thread continues immediately." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3)); // Allow detached thread to finish
    return 0;
}
