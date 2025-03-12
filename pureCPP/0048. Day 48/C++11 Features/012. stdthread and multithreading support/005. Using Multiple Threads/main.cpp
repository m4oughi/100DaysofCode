#include <iostream>
#include <thread>

void task(int id) {
    std::cout << "Thread " << id << " is working...\n";
}

int main() {
    std::thread t1(task, 1);
    std::thread t2(task, 2);

    t1.join();
    t2.join();

    return 0;
}
