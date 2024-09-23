#include <iostream>
#include <thread>

int main() {
    std::thread t([]() {
        std::cout << "Hello from thread!" << std::endl;
    });

    t.join(); // Waits for the thread to finish
    return 0;
}
