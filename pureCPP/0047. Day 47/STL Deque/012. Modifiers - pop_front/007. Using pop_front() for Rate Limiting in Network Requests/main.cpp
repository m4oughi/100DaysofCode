#include <iostream>
#include <deque>
#include <chrono>
#include <thread>

int main() {
    std::deque<int> requestQueue;

    // Simulating incoming requests
    for (int i = 1; i <= 5; ++i) {
        requestQueue.push_back(i);
        std::this_thread::sleep_for(std::chrono::milliseconds(500)); // Simulating delay

        if (requestQueue.size() > 3) {
            requestQueue.pop_front(); // Remove old requests to maintain the limit
        }

        std::cout << "Current requests: ";
        for (int req : requestQueue) std::cout << req << " ";
        std::cout << "\n";
    }

    return 0;
}
