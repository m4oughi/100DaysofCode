#include <iostream>
#include <thread>
#include <mutex>
#include <vector>

std::mutex mtx;
std::vector<int> sharedData;

void processData(int id) {
    std::lock_guard<std::mutex> lock(mtx);
    std::cout << "Thread " << id << " is processing data..." << std::endl;
    for (int i = 0; i < 5; ++i) {
        sharedData.push_back(id * 10 + i);
    }
}

int main() {
    std::thread t1(processData, 1);
    std::thread t2(processData, 2);

    t1.join();
    t2.join();

    std::cout << "Shared Data: ";
    for (int i : sharedData) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
