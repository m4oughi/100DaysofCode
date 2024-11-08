#include <iostream>
#include <thread>

void task(int id) {
    std::cout << "Thread " << id << " started!" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "Thread " << id << " completed!" << std::endl;
}

int main() {
    std::thread t1(task, 1);
    std::thread t2(task, 2);

    t1.join(); // Wait for thread 1
    t2.join(); // Wait for thread 2

    std::cout << "Both threads have completed!" << std::endl;
    return 0;
}
