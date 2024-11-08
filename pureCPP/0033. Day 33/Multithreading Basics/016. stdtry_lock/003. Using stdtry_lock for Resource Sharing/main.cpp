#include <iostream>
#include <thread>
#include <mutex>

std::mutex resourceA;
std::mutex resourceB;

void accessResourceAFirst() {
    if (std::try_lock(resourceA, resourceB) == -1) {  // Try locking both resources
        std::cout << "Thread 1 locked Resource A and Resource B" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));  // Simulate work
        resourceA.unlock();
        resourceB.unlock();
    } else {
        std::cout << "Thread 1 could not lock both resources." << std::endl;
    }
}

void accessResourceBFirst() {
    if (std::try_lock(resourceB, resourceA) == -1) {  // Try locking both resources in opposite order
        std::cout << "Thread 2 locked Resource B and Resource A" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));  // Simulate work
        resourceB.unlock();
        resourceA.unlock();
    } else {
        std::cout << "Thread 2 could not lock both resources." << std::endl;
    }
}

int main() {
    std::thread t1(accessResourceAFirst);
    std::thread t2(accessResourceBFirst);

    t1.join();
    t2.join();

    return 0;
}
