#include <iostream>
#include <thread>

int main() {
    int result = 0;

    std::thread t([&result]() {
        result = 5 + 10;
    });

    t.join(); // Waits for the thread to finish
    std::cout << "Result: " << result << std::endl; // Outputs: Result: 15

    return 0;
}
