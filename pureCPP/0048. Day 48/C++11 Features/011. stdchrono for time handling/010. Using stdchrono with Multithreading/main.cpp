#include <iostream>
#include <chrono>
#include <thread>

void task(int id) {
    std::this_thread::sleep_for(std::chrono::seconds(id));
    std::cout << "Task " << id << " completed\n";
}

int main() {
    std::thread t1(task, 1);
    std::thread t2(task, 2);

    t1.join();
    t2.join();

    std::cout << "All tasks finished.\n";

    return 0;
}
