#include <iostream>
#include <chrono>
#include <thread>

void countdown(int seconds) {
    using namespace std::chrono;
    
    auto start = steady_clock::now();
    for (int i = seconds; i >= 0; --i) {
        std::cout << "Countdown: " << i << " seconds remaining...\n";
        std::this_thread::sleep_for(1s);
    }

    auto end = steady_clock::now();
    std::cout << "Total time elapsed: " << duration_cast<seconds>(end - start).count() << " seconds.\n";
}

int main() {
    countdown(5);
    return 0;
}
