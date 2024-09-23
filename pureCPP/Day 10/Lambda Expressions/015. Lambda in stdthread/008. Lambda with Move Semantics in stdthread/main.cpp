#include <iostream>
#include <thread>
#include <string>

int main() {
    std::string message = "Hello, World!";

    std::thread t([msg = std::move(message)]() {
        std::cout << "Message: " << msg << std::endl;
    });

    t.join(); // Waits for the thread to finish
    // message is now in a moved-from state and shouldn't be used.

    return 0;
}
