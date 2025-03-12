#include <iostream>
#include <chrono>
#include <thread>

int main() {
    std::cout << "Waiting for 3 seconds...\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "Done!\n";

    return 0;
}
