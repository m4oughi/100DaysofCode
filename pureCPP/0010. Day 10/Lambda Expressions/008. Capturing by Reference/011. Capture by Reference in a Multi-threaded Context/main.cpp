#include <iostream>
#include <thread>

int main() {
    int counter = 0;

    std::thread t([&counter]() {
        for (int i = 0; i < 5; ++i) {
            ++counter; // Modifies counter directly in the main thread
        }
    });

    t.join();
    std::cout << "Final counter value: " << counter << std::endl; // Outputs: Final counter value: 5
    return 0;
}
