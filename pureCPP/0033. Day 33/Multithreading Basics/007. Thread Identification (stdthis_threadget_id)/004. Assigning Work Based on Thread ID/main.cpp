#include <iostream>
#include <thread>

void task() {
    if (std::this_thread::get_id() == std::thread::id()) {
        std::cout << "Main thread (ID zero) running!" << std::endl;
    } else {
        std::cout << "Worker thread, ID: " << std::this_thread::get_id() << std::endl;
    }
}

int main() {
    std::cout << "Main Thread ID: " << std::this_thread::get_id() << std::endl;

    std::thread t1(task);
    std::thread t2(task);

    t1.join();
    t2.join();

    return 0;
}
