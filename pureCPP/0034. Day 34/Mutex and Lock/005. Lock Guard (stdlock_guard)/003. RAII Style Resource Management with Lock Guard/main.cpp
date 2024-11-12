#include <iostream>
#include <thread>
#include <mutex>
#include <vector>

std::mutex mtx;
std::vector<int> sharedData;

void addData(int value) {
    std::lock_guard<std::mutex> lock(mtx); // Lock released automatically at the end of scope
    sharedData.push_back(value);
}

int main() {
    std::thread t1(addData, 10);
    std::thread t2(addData, 20);

    t1.join();
    t2.join();

    for (int val : sharedData) {
        std::cout << val << " ";
    }
    std::cout << "\n";
    return 0;
}
