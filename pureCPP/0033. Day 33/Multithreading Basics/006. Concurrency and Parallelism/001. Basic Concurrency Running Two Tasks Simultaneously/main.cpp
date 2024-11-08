#include <iostream>
#include <thread>

void task1() {
    std::cout << "Task 1 is running..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Task 1 completed!" << std::endl;
}

void task2() {
    std::cout << "Task 2 is running..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Task 2 completed!" << std::endl;
}

int main() {
    std::thread t1(task1);
    std::thread t2(task2);

    t1.join();
    t2.join();

    std::cout << "Both tasks completed!" << std::endl;
    return 0;
}
