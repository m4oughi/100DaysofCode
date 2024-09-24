#include <iostream>
#include <thread>

class Worker {
public:
    void doWork() {
        std::thread t([this]() {
            std::cout << "Work done by thread from class member function!" << std::endl;
        });
        t.join(); // Waits for the thread to finish
    }
};

int main() {
    Worker w;
    w.doWork();
    return 0;
}
