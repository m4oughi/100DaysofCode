#include <iostream>
#include <thread>
#include <chrono>

void worker(std::stop_token st) {
    while (!st.stop_requested()) {
        std::cout << "Worker running...\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
    std::cout << "Worker stopped!\n";
}

int main() {
    std::stop_source stopSource;
    std::jthread t(worker, stopSource.get_token());
    
    std::this_thread::sleep_for(std::chrono::seconds(2));
    stopSource.request_stop();  // Stop the thread
}
