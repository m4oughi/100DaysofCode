#include <iostream>
#include <thread>
#include <chrono>

void periodic_task(std::stop_token st) {
    while (!st.stop_requested()) {
        std::cout << "Periodic task running...\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
    }
    std::cout << "Task stopped!\n";
}

int main() {
    std::jthread t(periodic_task);
    std::this_thread::sleep_for(std::chrono::seconds(2));
    t.request_stop();  // Stop after 2 seconds
}
