#include <iostream>
#include <thread>
#include <mutex>

std::recursive_mutex rmtx;

void recursiveTask(int count) {
    if (count <= 0) return;
    std::lock_guard<std::recursive_mutex> lock(rmtx);
    std::cout << "Recursive task " << count << std::endl;
    recursiveTask(count - 1);
}

int main() {
    std::thread t(recursiveTask, 5);
    t.join();
    return 0;
}
