#include <iostream>
#include <thread>

void printTask(int taskNumber) {
    std::cout << "Task " << taskNumber << " running!" << std::endl;
}

int main() {
    std::thread t1(printTask, 1);
    std::thread t2(printTask, 2);

    t1.join();
    t2.join();
    return 0;
}
