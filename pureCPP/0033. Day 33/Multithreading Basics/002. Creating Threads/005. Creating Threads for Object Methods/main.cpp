#include <iostream>
#include <thread>

class Worker {
public:
    void performTask() {
        std::cout << "Performing task in thread!" << std::endl;
    }
};

int main() {
    Worker worker;
    std::thread t1(&Worker::performTask, &worker); // Create thread for class method
    t1.join();
    return 0;
}
