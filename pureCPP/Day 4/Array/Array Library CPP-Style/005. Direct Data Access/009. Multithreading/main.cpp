#include <iostream>
#include <array>
#include <thread>
#include <mutex>

std::mutex mtx;

void incrementArray(int* data, std::size_t size) {
    std::lock_guard<std::mutex> lock(mtx);
    for (std::size_t i = 0; i < size; ++i) {
        data[i]++;
    }
}

int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};

    std::thread t1(incrementArray, arr.data(), arr.size());
    std::thread t2(incrementArray, arr.data(), arr.size());

    t1.join();
    t2.join();

    for (const auto& elem : arr) {
        std::cout << elem << " ";  // Output: 3 4 5 6 7 (or similar depending on thread scheduling)
    }

    return 0;
}