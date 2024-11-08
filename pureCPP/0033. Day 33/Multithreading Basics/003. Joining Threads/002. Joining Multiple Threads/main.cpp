#include <iostream>
#include <thread>

void task(int id) {
    std::cout << "Task " << id << " is running!" << std::endl;
}

int main() {
    std::thread t1(task, 1);
    std::thread t2(task, 2);
    std::thread t3(task, 3);

    t1.join(); // Wait for each thread to finish
    t2.join();
    t3.join();

    return 0;
}
