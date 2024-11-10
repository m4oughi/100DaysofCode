#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
#include <map>

std::recursive_timed_mutex rtmtx;
std::map<int, int> sharedMap;

void modifySharedMap(int key, int depth) {
    if (depth <= 0) return;

    if (rtmtx.try_lock_for(std::chrono::milliseconds(100))) {
        sharedMap[key] += depth;
        std::cout << "Key " << key << ", Depth " << depth << ", Value: " << sharedMap[key] << "\n";
        modifySharedMap(key, depth - 1); // Recursive modification
        rtmtx.unlock();
    } else {
        std::cout << "Failed to lock for Key " << key << " at depth " << depth << "\n";
    }
}

int main() {
    std::thread t1(modifySharedMap, 1, 3);
    std::thread t2(modifySharedMap, 1, 3);

    t1.join();
    t2.join();

    // Print final map state
    for (const auto& entry : sharedMap) {
        std::cout << "Key " << entry.first << ": " << entry.second << "\n";
    }
    return 0;
}
