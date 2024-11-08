#include <iostream>
#include <thread>
#include <mutex>

int sharedA = 0;
int sharedB = 0;
std::mutex mtx;

void incrementBoth() {
    std::lock_guard<std::mutex> lock(mtx);  // Protect both shared variables
    ++sharedA;
    ++sharedB;
}

int main() {
    std::thread t1(incrementBoth);
    std::thread t2(incrementBoth);

    t1.join();
    t2.join();

    std::cout << "sharedA: " << sharedA << " | sharedB: " << sharedB << std::endl;
    return 0;
}
