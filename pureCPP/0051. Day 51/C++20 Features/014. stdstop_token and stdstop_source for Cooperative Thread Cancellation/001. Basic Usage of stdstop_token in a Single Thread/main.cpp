#include <iostream>
#include <thread>
#include <chrono>

void task(std::stop_token st) {
    while (!st.stop_requested()) {
        std::cout << "Task running...\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
    std::cout << "Task stopped!\n";
}

int main() {
    std::jthread t(task);
    std::this_thread::sleep_for(std::chrono::seconds(2));
    t.request_stop();  // Request the thread to stop
}
