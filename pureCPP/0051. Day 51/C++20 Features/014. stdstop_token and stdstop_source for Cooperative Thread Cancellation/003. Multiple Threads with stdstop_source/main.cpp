#include <iostream>
#include <thread>
#include <vector>
#include <chrono>

void worker(std::stop_token st, int id) {
    while (!st.stop_requested()) {
        std::cout << "Worker " << id << " is running...\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
    std::cout << "Worker " << id << " stopped.\n";
}

int main() {
    std::stop_source stopSource;
    std::vector<std::jthread> workers;

    for (int i = 0; i < 3; ++i)
        workers.emplace_back(worker, stopSource.get_token(), i);

    std::this_thread::sleep_for(std::chrono::seconds(2));
    stopSource.request_stop();  // Stop all threads
}
