#include <iostream>
#include <thread>
#include <chrono>

void task(std::stop_token st) {
    std::stop_callback callback(st, [] { 
        std::cout << "Stop requested, performing cleanup...\n"; 
    });

    while (!st.stop_requested()) {
        std::cout << "Task is running...\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
    std::cout << "Task exiting cleanly.\n";
}

int main() {
    std::jthread t(task);
    std::this_thread::sleep_for(std::chrono::seconds(2));
    t.request_stop();
}
