#include <iostream>
#include <thread>
#include <unordered_map>

thread_local std::unordered_map<int, int> cache;

int computeValue(int x) {
    if (cache.find(x) == cache.end()) {
        cache[x] = x * x;  // Cache computation
    }
    return cache[x];
}

void accessCache(int id) {
    std::cout << "Thread " << std::this_thread::get_id() << " - Computed value for " << id << ": " << computeValue(id) << std::endl;
}

int main() {
    std::thread t1(accessCache, 5);
    std::thread t2(accessCache, 5);
    std::thread t3(accessCache, 10);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}
