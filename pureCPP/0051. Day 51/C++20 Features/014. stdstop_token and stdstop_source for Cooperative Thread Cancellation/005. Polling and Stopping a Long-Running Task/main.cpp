#include <iostream>
#include <thread>
#include <chrono>

void compute(std::stop_token st) {
    int i = 0;
    while (!st.stop_requested()) {
        std::cout << "Computing... Step " << ++i << "\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
    std::cout << "Computation stopped safely.\n";
}

int main() {
    std::jthread t(compute);
    std::this_thread::sleep_for(std::chrono::seconds(3));
    t.request_stop();
}
