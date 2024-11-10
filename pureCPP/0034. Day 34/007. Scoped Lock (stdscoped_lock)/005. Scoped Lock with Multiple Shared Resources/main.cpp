#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx1, mtx2;
int resourceA = 0, resourceB = 0;

void updateResources() {
    std::scoped_lock lock(mtx1, mtx2); // Both resources are locked
    resourceA += 10;
    resourceB += 20;
    std::cout << "Resources updated. ResourceA: " << resourceA << ", ResourceB: " << resourceB << "\n";
}

int main() {
    std::thread t1(updateResources);
    std::thread t2(updateResources);

    t1.join();
    t2.join();

    return 0;
}
