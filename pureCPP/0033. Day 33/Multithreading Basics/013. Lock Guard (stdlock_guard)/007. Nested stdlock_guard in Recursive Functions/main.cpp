#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void recursiveFunction(int count) {
    if (count <= 0) return;
    
    std::lock_guard<std::mutex> lock(mtx);
    std::cout << "Count: " << count << std::endl;
    recursiveFunction(count - 1);  // Recursive call
}

int main() {
    std::thread t1(recursiveFunction, 5);
    std::thread t2(recursiveFunction, 5);

    t1.join();
    t2.join();

    return 0;
}
