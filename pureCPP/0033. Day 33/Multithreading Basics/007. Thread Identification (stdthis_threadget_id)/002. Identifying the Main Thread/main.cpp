#include <iostream>
#include <thread>

void childThread() {
    std::cout << "Child Thread ID: " << std::this_thread::get_id() << std::endl;
}

int main() {
    std::cout << "Main Thread ID: " << std::this_thread::get_id() << std::endl;

    std::thread t1(childThread);
    std::thread t2(childThread);

    t1.join();
    t2.join();

    return 0;
}
