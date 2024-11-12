#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
#include <map>
#include <string>

std::recursive_timed_mutex rtmtx;
std::map<std::string, int> resourceMap;

void allocateResource(const std::string& resource, int amount) {
    if (rtmtx.try_lock_for(std::chrono::milliseconds(100))) {
        resourceMap[resource] += amount;
        std::cout << "Allocated " << amount << " to " << resource << "\n";
        rtmtx.unlock();
    } else {
        std::cout << "Failed to allocate " << amount << " to " << resource << "\n";
    }
}

void manageResources(int depth) {
    if (depth <= 0) return;

    allocateResource("CPU", depth * 10);
    allocateResource("Memory", depth * 5);

    if (rtmtx.try_lock_for(std::chrono::milliseconds(100))) {
        manageResources(depth - 1); // Recursive resource management
        rtmtx.unlock();
    }

    allocateResource("Memory", -depth * 5); // Deallocate resources
    allocateResource("CPU", -depth * 10);
}

int main() {
    std::thread t1(manageResources, 3);
    std::thread t2(manageResources, 3);

    t1.join();
    t2.join();

    // Print final resource state
    for (const auto& res : resourceMap) {
        std::cout << res.first << ": " << res.second << "\n";
    }

    return 0;
}
