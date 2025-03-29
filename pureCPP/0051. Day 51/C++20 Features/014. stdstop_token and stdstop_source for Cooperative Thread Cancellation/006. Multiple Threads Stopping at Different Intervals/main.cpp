#include <iostream>
#include <thread>
#include <chrono>
#include <vector>

void task(std::stop_token st, int id, int duration) {
    for (int i = 0; i < duration; ++i) {
        if (st.stop_requested()) {
            std::cout << "Worker " << id << " stopping early!\n";
            return;
        }
        std::cout << "Worker " << id << " running...\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
    std::cout << "Worker " << id << " finished normally.\n";
}

int main() {
    std::stop_source stopSource;
    std::jthread t1(task, stopSource.get_token(), 1, 6);
    std::jthread t2(task, stopSource.get_token(), 2, 3);

    std::this_thread::sleep_for(std::chrono::seconds(2));
    stopSource.request_stop();  // Stop all workers
}
