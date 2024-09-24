#include <iostream>
#include <thread>

int main() {
    int count = 0;

    std::thread t([count]() mutable {
        count += 5;
        std::cout << "Count in thread: " << count << std::endl; // Outputs: Count in thread: 5
    });

    t.join(); // Waits for the thread to finish
    std::cout << "Count in main: " << count << std::endl; // Outputs: Count in main: 0

    return 0;
}
