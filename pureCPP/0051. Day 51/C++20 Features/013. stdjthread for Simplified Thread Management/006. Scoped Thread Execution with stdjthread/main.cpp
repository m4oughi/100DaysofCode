#include <iostream>
#include <thread>
#include <chrono>

void timed_task(std::stop_token st) {
    for (int i = 0; i < 5; ++i) {
        if (st.stop_requested()) {
            std::cout << "Task stopped early!\n";
            return;
        }
        std::cout << "Running iteration " << i + 1 << "\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

int main() {
    {
        std::jthread t(timed_task);
        std::this_thread::sleep_for(std::chrono::seconds(1));
        t.request_stop();  // Stop within scope
    }  // `t` automatically joins here
}
