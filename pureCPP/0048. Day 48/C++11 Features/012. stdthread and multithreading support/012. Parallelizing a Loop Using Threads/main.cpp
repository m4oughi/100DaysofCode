#include <iostream>
#include <vector>
#include <thread>

void processElement(int id, int value) {
    std::cout << "Thread " << id << " processing value: " << value << "\n";
}

int main() {
    std::vector<int> data = {10, 20, 30, 40, 50};
    std::vector<std::thread> threads;

    for (size_t i = 0; i < data.size(); ++i) {
        threads.emplace_back(processElement, i, data[i]);
    }

    for (auto& t : threads) {
        t.join();
    }

    return 0;
}
