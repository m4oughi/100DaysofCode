#include <iostream>
#include <chrono>
#include <thread>

int main() {
    auto start = std::chrono::steady_clock::now();
    
    std::this_thread::sleep_for(std::chrono::seconds(2));

    auto end = std::chrono::steady_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::seconds>(end - start);

    std::cout << "Elapsed time: " << duration.count() << " seconds\n";

    return 0;
}
