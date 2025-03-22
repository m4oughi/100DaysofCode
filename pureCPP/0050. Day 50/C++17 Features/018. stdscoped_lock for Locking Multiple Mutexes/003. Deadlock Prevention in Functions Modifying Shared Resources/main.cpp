#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtxX, mtxY;

void processA() {
    std::scoped_lock lock(mtxX, mtxY);
    std::cout << "processA locked both mutexes safely.\n";
}

void processB() {
    std::scoped_lock lock(mtxY, mtxX);
    std::cout << "processB locked both mutexes safely.\n";
}

int main() {
    std::thread t1(processA);
    std::thread t2(processB);

    t1.join();
    t2.join();

    return 0;
}
