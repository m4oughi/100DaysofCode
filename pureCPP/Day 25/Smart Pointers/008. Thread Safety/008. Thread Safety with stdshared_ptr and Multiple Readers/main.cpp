#include <iostream>
#include <memory>
#include <thread>
#include <vector>

void reader(std::shared_ptr<int> sharedPtr) {
    std::cout << "Reader thread, value: " << *sharedPtr << std::endl;
}

int main() {
    auto sharedPtr = std::make_shared<int>(99);

    std::vector<std::thread> threads;
    for (int i = 0; i < 5; ++i) {
        threads.emplace_back(reader, sharedPtr);  // Each thread gets a copy of sharedPtr
    }

    for (auto& t : threads) {
        t.join();
    }

    return 0;
}
