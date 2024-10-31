#include <iostream>
#include <functional>

class Worker {
public:
    void doWork() {
        std::cout << "Work is being done!" << std::endl;
    }
};

class TaskManager {
public:
    void runTask(std::function<void()> task) {
        try {
            task();  // Will throw std::bad_function_call if task is empty
        } catch (const std::bad_function_call& e) {
            std::cout << "Caught std::bad_function_call in class: " << e.what() << std::endl;
        }
    }
};

int main() {
    Worker worker;
    std::function<void()> task = nullptr;  // Empty task
    TaskManager manager;
    manager.runTask(task);  // Task manager tries to run an empty task
    return 0;
}
