#include <iostream>
#include <thread>
#include <chrono>

void worker(std::stop_token st, int id) {
    while (!st.stop_requested()) {
        std::cout << "Worker " << id << " processing...\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
    std::cout << "Worker " << id << " stopped.\n";
}

int main() {
    std::stop_source stopSource1, stopSource2;
    std::jthread t1(worker, stopSource1.get_token(), 1);
    std::jthread t2(worker, stopSource2.get_token(), 2);

    std::this_thread::sleep_for(std::chrono::seconds(2));
    stopSource1.request_stop();  // Stop only worker 1
    std::this_thread::sleep_for(std::chrono::seconds(2));
    stopSource2.request_stop();  // Stop worker 2 later
}
