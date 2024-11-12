#include <iostream>
#include <thread>
#include <mutex>
#include <vector>

std::vector<int> resources = {1, 2, 3};
std::mutex resourceMutex;

void accessResource(int threadID) {
    if (resourceMutex.try_lock()) {
        if (!resources.empty()) {
            int resource = resources.back();
            resources.pop_back();
            std::cout << "Thread " << threadID << " acquired resource " << resource << "\n";
            resourceMutex.unlock();

            std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Simulate usage

            resourceMutex.lock();
            resources.push_back(resource); // Return resource to pool
            std::cout << "Thread " << threadID << " released resource " << resource << "\n";
        }
        resourceMutex.unlock();
    } else {
        std::cout << "Thread " << threadID << " could not acquire a resource.\n";
    }
}

int main() {
    std::thread t1(accessResource, 1);
    std::thread t2(accessResource, 2);
    std::thread t3(accessResource, 3);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}
