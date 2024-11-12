#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx1, mtx2, mtx3;
int resourceX = 0, resourceY = 0, resourceZ = 0;

void taskA() {
    std::scoped_lock lock(mtx1, mtx2, mtx3); // Locks all resources simultaneously
    resourceX += 1;
    resourceY += 2;
    resourceZ += 3;
    std::cout << "Task A updated resources.\n";
}

void taskB() {
    std::scoped_lock lock(mtx1, mtx2, mtx3); // Ensures no deadlock occurs
    resourceX += 10;
    resourceY += 20;
    resourceZ += 30;
    std::cout << "Task B updated resources.\n";
}

int main() {
    std::thread t1(taskA);
    std::thread t2(taskB);

    t1.join();
    t2.join();

    std::cout << "Final ResourceX: " << resourceX << "\n";
    std::cout << "Final ResourceY: " << resourceY << "\n";
    std::cout << "Final ResourceZ: " << resourceZ << "\n";
    return 0;
}
