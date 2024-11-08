#include <iostream>
#include <thread>

void immediateJoinTask(int id) {
    std::cout << "Thread " << id << " is running." << std::endl;
}

int main() {
    for (int i = 1; i <= 3; ++i) {
        std::thread t(immediateJoinTask, i);
        t.join();  // Join immediately
    }

    return 0;
}
