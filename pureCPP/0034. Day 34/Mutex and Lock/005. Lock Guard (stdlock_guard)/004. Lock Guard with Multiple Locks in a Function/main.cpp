#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx1, mtx2;
int resourceA = 0, resourceB = 0;

void updateResources() {
    std::lock_guard<std::mutex> lock1(mtx1); // Lock the first mutex
    std::lock_guard<std::mutex> lock2(mtx2); // Lock the second mutex

    resourceA += 10;
    resourceB += 20;
}

int main() {
    std::thread t1(updateResources);
    std::thread t2(updateResources);

    t1.join();
    t2.join();

    std::cout << "Resource A: " << resourceA << ", Resource B: " << resourceB << "\n";
    return 0;
}
