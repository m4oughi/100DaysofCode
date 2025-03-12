#include <iostream>
#include <future>
#include <chrono>

int longComputation() {
    std::this_thread::sleep_for(std::chrono::seconds(3));
    return 42;
}

int main() {
    std::future<int> result = std::async(std::launch::async, longComputation);

    std::cout << "Waiting for result...\n";
    int value = result.get();
    std::cout << "Computation finished! Result: " << value << "\n";
    return 0;
}
