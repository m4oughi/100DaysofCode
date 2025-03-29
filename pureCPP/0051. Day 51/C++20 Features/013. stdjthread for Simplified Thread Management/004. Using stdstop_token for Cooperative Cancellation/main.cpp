#include <iostream>
#include <thread>
#include <chrono>

void worker(std::stop_token st) {
    while (!st.stop_requested()) {
        std::cout << "Working...\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
    std::cout << "Worker stopped\n";
}

int main() {
    std::jthread t(worker);  // Automatically passes stop_token
    std::this_thread::sleep_for(std::chrono::seconds(2));
    t.request_stop();  // Graceful stop request
}
